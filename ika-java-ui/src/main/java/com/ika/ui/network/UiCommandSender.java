package com.ika.ui.network;

import java.util.Map;
import com.ika.ui.util.JsonParser;

public class UiCommandSender {
    private WebSocketClientService ws;

    public UiCommandSender(WebSocketClientService ws) { this.ws = ws; }

    public void sendCommand(Map<String,Object> command) {
        String json = JsonParser.toJson(command);
        ws.send(json);
    }
}
