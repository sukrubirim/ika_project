package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;
import java.util.function.Consumer;

public class ControlPanel extends JPanel {
    private JButton manualBtn, autoBtn, safeBtn;
    private EmergencyPanel emergencyPanel;
    private BatteryPanel batteryPanel;
    private LaserPanel laserPanel;

    public ControlPanel() {
        setLayout(new GridLayout(6,1));
        manualBtn = new JButton("Manual");
        autoBtn = new JButton("Autonomous");
        safeBtn = new JButton("Safe");
        add(manualBtn);
        add(autoBtn);
        add(safeBtn);
        emergencyPanel = new EmergencyPanel();
        batteryPanel = new BatteryPanel();
        laserPanel = new LaserPanel();
        add(emergencyPanel);
        add(batteryPanel);
        add(laserPanel);
    }

    public void setModeHandler(Consumer<String> h) {
        manualBtn.addActionListener(e -> h.accept("MANUAL"));
        autoBtn.addActionListener(e -> h.accept("AUTONOMOUS"));
        safeBtn.addActionListener(e -> h.accept("SAFE"));
    }

    public void setEmergencyHandler(Consumer<Boolean> h) {
        emergencyPanel.setEmergencyHandler(h);
    }

    public void setLaserHandlers(Runnable armAction, Runnable fireAction) {
        laserPanel.setArmAction(armAction);
        laserPanel.setFireAction(fireAction);
    }

    public void setDataLoggerHandlers(Runnable startAction, Runnable stopAction) {
        // DataLoggerPanel is not a direct field here; create temporarily to find the panel in parent layout
        // In current layout DataLoggerPanel is placed in bottom area; caller should wire directly if needed.
        // Provide a convenience no-op; MainWindow will wire DataLoggerPanel explicitly if required.
    }

    public void setEmergencyState(boolean active) {
        emergencyPanel.setEmergencyState(active);
        manualBtn.setEnabled(!active);
        autoBtn.setEnabled(!active);
        safeBtn.setEnabled(!active);
        laserPanel.setEnabled(!active);
        batteryPanel.setEnabled(!active);
    }
}
