import asyncio
import json
import logging
from websockets import serve

class WebSocketServer:
    def __init__(self, status_cache, command_handler, host='0.0.0.0', port=8765):
        self.status_cache = status_cache
        self.command_handler = command_handler
        self.host = host
        self.port = port
        self.clients = set()

    async def _handler(self, websocket, path):
        self.clients.add(websocket)
        try:
            # send welcome / current snapshot
            await websocket.send(json.dumps({'type':'welcome', 'status': self.status_cache.get_snapshot()}))
            async for msg in websocket:
                try:
                    data = json.loads(msg)
                    # commands expected
                    if 'type' in data:
                        self.command_handler.handle(data)
                except Exception as e:
                    logging.exception('WS recv error')
        finally:
            self.clients.remove(websocket)

    async def broadcaster(self, interval=0.2):
        while True:
            if self.clients:
                payload = json.dumps({'type':'robot_status', 'timestamp': int(asyncio.get_event_loop().time()*1000), 'status': self.status_cache.get_snapshot()})
                await asyncio.wait([c.send(payload) for c in list(self.clients)])
            await asyncio.sleep(interval)

    def start(self):
        loop = asyncio.get_event_loop()
        loop.create_task(self.broadcaster())
        return serve(self._handler, self.host, self.port)
