package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class LaserPanel extends JPanel {
    private JLabel status;
    private JButton armBtn;
    private JButton fireBtn;

    public LaserPanel() {
        setLayout(new GridLayout(3,1));
        status = new JLabel("Laser: OFF", SwingConstants.CENTER);
        armBtn = new JButton("Arm Laser");
        fireBtn = new JButton("Fire");
        fireBtn.setEnabled(false);
        add(status);
        add(armBtn);
        add(fireBtn);
    }

    public void setArmAction(Runnable r) { armBtn.addActionListener(e -> r.run()); }
    public void setFireAction(Runnable r) { fireBtn.addActionListener(e -> r.run()); }

    public void updateLaser(boolean armed, boolean ready, boolean locked) {
        SwingUtilities.invokeLater(() -> {
            status.setText(String.format("Armed:%b Ready:%b Locked:%b", armed, ready, locked));
            fireBtn.setEnabled(armed && ready && locked);
        });
    }
}
