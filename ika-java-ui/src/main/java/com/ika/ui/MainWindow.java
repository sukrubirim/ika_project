package com.ika.ui;

import javax.swing.*;
import java.awt.*;
import com.ika.ui.panels.*;
import com.ika.ui.network.WebSocketClientService;
import com.ika.ui.network.UiCommandSender;
import com.ika.ui.model.RobotStatus;
import java.util.Map;

public class MainWindow extends JFrame {
    private ControlPanel controlPanel;
    private JPanel cameraContainer;
    private MissionPanel missionPanel;

    public MainWindow() {
        super("IKA Control Panel");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(1400, 900);
        setLayout(new BorderLayout());

        controlPanel = new ControlPanel();
        missionPanel = new MissionPanel();

        cameraContainer = new JPanel(new GridLayout(1,3));
        cameraContainer.add(new CameraPanel());
        cameraContainer.add(new CameraPanel());
        cameraContainer.add(new CameraPanel());

        add(controlPanel, BorderLayout.WEST);
        add(cameraContainer, BorderLayout.CENTER);
        add(missionPanel, BorderLayout.EAST);

        JPanel bottom = new JPanel(new BorderLayout());
        bottom.add(new DataLoggerPanel(), BorderLayout.WEST);
        bottom.add(new SensorStatusPanel(), BorderLayout.CENTER);
        add(bottom, BorderLayout.SOUTH);

        // Network: connect to WebSocket bridge (mock or real)
        WebSocketClientService ws = new WebSocketClientService();
        new Thread(() -> {
            try {
                ws.connect("ws://localhost:8765", msg -> {
                    RobotStatus s = RobotStatus.fromJson(msg);
                    if (s.mission_state != null) missionPanel.updateMission(s.mission_state);
                    if (msg.contains("\"emergency_stop\":true")) controlPanel.setEmergencyState(true);
                    else if (msg.contains("\"emergency_stop\":false")) controlPanel.setEmergencyState(false);
                });
            } catch (Exception e) {
                e.printStackTrace();
            }
        }).start();

        UiCommandSender cmd = new UiCommandSender(ws);
        controlPanel.setModeHandler(mode -> cmd.sendCommand(Map.of("type","set_mode","mode",mode)));
        controlPanel.setEmergencyHandler(active -> cmd.sendCommand(Map.of("type","emergency_stop","active", active)));

        // Laser arm/fire bindings
        controlPanel.setLaserHandlers(
            () -> cmd.sendCommand(Map.of("type","laser_arm","active", true)),
            () -> cmd.sendCommand(Map.of("type","laser_fire"))
        );

        // Data logger bindings: find the DataLoggerPanel in the bottom area and wire actions
        Component[] bottomChildren = bottom.getComponents();
        for (Component c : bottomChildren) {
            if (c instanceof com.ika.ui.panels.DataLoggerPanel) {
                com.ika.ui.panels.DataLoggerPanel dlp = (com.ika.ui.panels.DataLoggerPanel)c;
                dlp.setStartAction(() -> cmd.sendCommand(Map.of("type","data_logger","command","START")));
                dlp.setStopAction(() -> cmd.sendCommand(Map.of("type","data_logger","command","STOP")));
            }
        }
    }
}
