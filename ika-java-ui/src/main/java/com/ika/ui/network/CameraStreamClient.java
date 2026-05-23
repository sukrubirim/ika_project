package com.ika.ui.network;

import java.util.function.Consumer;

public class CameraStreamClient {
    // Placeholder: connect to MJPEG or WS camera and call onFrame for each JPEG
    public void connectMjpeg(String url, Consumer<byte[]> onFrame) {
        // Implementation left for integrator: use HttpURLConnection and parse multipart/x-mixed-replace
    }
}
