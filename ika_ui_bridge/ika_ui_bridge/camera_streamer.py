from aiohttp import web
import asyncio

async def mjpeg_stream_generator(cam_frame_provider):
    boundary = 'frame'
    while True:
        frame = await cam_frame_provider.get_frame()  # async provider expected
        yield (b'--' + boundary.encode() + b'\r\n' + b'Content-Type: image/jpeg\r\n\r\n' + frame + b'\r\n')

class CameraStreamer:
    def __init__(self, cam_provider, host='0.0.0.0', port=8090):
        self.cam_provider = cam_provider
        self.host = host
        self.port = port
        self.app = web.Application()
        self.app.add_routes([web.get('/mjpeg/{name}', self._mjpeg)])

    async def _mjpeg(self, request):
        name = request.match_info['name']
        return web.Response(body=mjpeg_stream_generator(self.cam_provider), status=200)

    def start(self):
        web.run_app(self.app, host=self.host, port=self.port)
