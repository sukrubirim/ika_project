#!/usr/bin/env python3
"""Basit mock server: WebSocket robot_status broadcast + REST command endpoint
Kullanım: python3 tools/mock_ui_server.py
"""
import asyncio
import json
from aiohttp import web
import websockets

CLIENTS = set()

async def ws_handler(websocket, path):
    CLIENTS.add(websocket)
    try:
        await websocket.send(json.dumps({'type':'welcome'}))
        async for msg in websocket:
            print('recv', msg)
    finally:
        CLIENTS.remove(websocket)

async def broadcaster():
    while True:
        if CLIENTS:
            payload = {'type':'robot_status', 'timestamp': int(asyncio.get_event_loop().time()*1000), 'status': {
                'mode': 'AUTONOMOUS', 'mission_state':'CONE_NAVIGATION',
                'battery': {'percentage': 78, 'voltage':24.1, 'current':3.2},
                'imu': {'roll':4.2,'pitch':8.1,'yaw':122.0},
                'laser': {'locked': True, 'ready': True, 'fired': False},
                'sensors': {'front_camera':'ONLINE','rear_camera':'ONLINE','lidar':'ONLINE'},
                'emergency_stop': False
            }}
            msg = json.dumps(payload)
            await asyncio.wait([c.send(msg) for c in list(CLIENTS)])
        await asyncio.sleep(0.2)

async def rest_command(request):
    data = await request.json()
    print('REST command', data)
    return web.json_response({'result':'ok'})

def main():
    start_server = websockets.serve(ws_handler, '0.0.0.0', 8765)
    app = web.Application()
    app.add_routes([web.post('/command', rest_command), web.get('/status', lambda r: web.json_response({'ok':True}))])
    loop = asyncio.get_event_loop()
    loop.run_until_complete(start_server)
    loop.create_task(broadcaster())
    web.run_app(app, host='0.0.0.0', port=8081)

if __name__ == '__main__':
    main()
