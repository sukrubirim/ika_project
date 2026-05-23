package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class MissionPanel extends JPanel {
    private JLabel stateLabel;

    public MissionPanel() {
        setLayout(new BorderLayout());
        stateLabel = new JLabel("MISSION: STARTUP", SwingConstants.CENTER);
        stateLabel.setFont(stateLabel.getFont().deriveFont(18f));
        add(stateLabel, BorderLayout.NORTH);
    }

    public void updateMission(String state) {
        SwingUtilities.invokeLater(() -> stateLabel.setText("MISSION: " + state));
    }
}
