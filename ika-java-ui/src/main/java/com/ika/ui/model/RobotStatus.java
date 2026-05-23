package com.ika.ui.model;

public class RobotStatus {
    public String rawJson;
    public String mode;
    public String mission_state;
    public boolean emergency_stop;

    public static RobotStatus fromJson(String json) {
        // Minimal parser: store raw JSON. Integrator should replace with full parser.
        RobotStatus s = new RobotStatus();
        s.rawJson = json;
        // naive extraction for mission_state
        if (json.contains("mission_state")) {
            int i = json.indexOf("mission_state");
            int colon = json.indexOf(':', i);
            if (colon>0) {
                int start = json.indexOf('"', colon);
                int end = json.indexOf('"', start+1);
                if (start>0 && end>start) s.mission_state = json.substring(start+1,end);
            }
        }
        return s;
    }
}
