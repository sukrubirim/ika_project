package com.ika.ui.network;

import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.WebSocket;
import java.util.concurrent.CompletionStage;
import java.util.function.Consumer;

public class WebSocketClientService {
    private WebSocket ws;

    public WebSocketClientService() {}

    public void connect(String uri, Consumer<String> onMessage) {
        HttpClient client = HttpClient.newHttpClient();
        ws = client.newWebSocketBuilder().buildAsync(URI.create(uri), new WebSocket.Listener() {
            @Override
            public CompletionStage<?> onText(WebSocket webSocket, CharSequence data, boolean last) {
                onMessage.accept(data.toString());
                webSocket.request(1);
                return null;
            }
        }).join();
    }

    public void send(String msg) {
        if (ws != null) ws.sendText(msg, true);
    }
}
