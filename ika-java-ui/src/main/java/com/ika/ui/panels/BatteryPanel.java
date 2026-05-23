package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class BatteryPanel extends JPanel {
    private JProgressBar bar;
    private JLabel voltLabel;

    public BatteryPanel() {
        setLayout(new BorderLayout());
        bar = new JProgressBar(0,100);
        voltLabel = new JLabel("V: --, I: --");
        add(bar, BorderLayout.CENTER);
        add(voltLabel, BorderLayout.SOUTH);
    }

    public void updateBattery(int percent, double voltage, double current) {
        SwingUtilities.invokeLater(() -> {
            bar.setValue(percent);
            voltLabel.setText(String.format("V: %.2f V, I: %.2f A", voltage, current));
            if (percent < 15) bar.setForeground(Color.RED);
            else if (percent < 40) bar.setForeground(Color.ORANGE);
            else bar.setForeground(Color.GREEN);
        });
    }
}
