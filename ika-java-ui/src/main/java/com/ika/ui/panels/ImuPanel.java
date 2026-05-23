package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class ImuPanel extends JPanel {
    private JLabel rollLabel;
    private JLabel pitchLabel;

    public ImuPanel() {
        setLayout(new GridLayout(2,1));
        rollLabel = new JLabel("Roll: --°", SwingConstants.CENTER);
        rollLabel.setFont(rollLabel.getFont().deriveFont(18f));
        pitchLabel = new JLabel("Pitch: --°", SwingConstants.CENTER);
        pitchLabel.setFont(pitchLabel.getFont().deriveFont(18f));
        add(rollLabel);
        add(pitchLabel);
    }

    public void updateImu(double roll, double pitch, double yaw) {
        SwingUtilities.invokeLater(() -> {
            rollLabel.setText(String.format("Roll: %.1f°", roll));
            pitchLabel.setText(String.format("Pitch: %.1f°", pitch));
            if (Math.abs(roll) > 20 || Math.abs(pitch) > 45) {
                setBackground(Color.RED);
            } else if (Math.abs(roll) > 15 || Math.abs(pitch) > 35) {
                setBackground(Color.ORANGE);
            } else {
                setBackground(Color.GREEN);
            }
        });
    }
}
