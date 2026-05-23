package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class DataLoggerPanel extends JPanel {
    private JButton startBtn;
    private JButton stopBtn;
    private JLabel status;

    public DataLoggerPanel() {
        setLayout(new FlowLayout());
        startBtn = new JButton("Start Log");
        stopBtn = new JButton("Stop Log");
        status = new JLabel("Logger: stopped");
        add(startBtn);
        add(stopBtn);
        add(status);
    }

    public void setStartAction(Runnable r) { startBtn.addActionListener(e -> r.run()); }
    public void setStopAction(Runnable r) { stopBtn.addActionListener(e -> r.run()); }

    public void updateLogger(boolean active, String name, int seconds) {
        SwingUtilities.invokeLater(() -> status.setText(String.format("Logger: %s (%s) %ds", active?"running":"stopped", name, seconds)));
    }
}
