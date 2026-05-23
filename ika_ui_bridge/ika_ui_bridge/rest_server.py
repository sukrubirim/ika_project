from aiohttp import web
import json

class RestServer:
    def __init__(self, status_cache, command_handler, host='0.0.0.0', port=8080):
        self.status_cache = status_cache
        self.command_handler = command_handler
        self.app = web.Application()
        self.app.add_routes([
            web.get('/status', self._status),
            web.post('/command', self._command),
        ])
        self.host = host
        self.port = port

    async def _status(self, request):
        return web.json_response({'type':'robot_status', 'status': self.status_cache.get_snapshot()})

    async def _command(self, request):
        data = await request.json()
        self.command_handler.handle(data)
        return web.json_response({'result':'ok'})

    def start(self):
        web.run_app(self.app, host=self.host, port=self.port)
