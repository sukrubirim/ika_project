package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class CameraPanel extends JPanel {
    private JLabel imageLabel;

    public CameraPanel() {
        setLayout(new BorderLayout());
        imageLabel = new JLabel("Camera", SwingConstants.CENTER);
        imageLabel.setBackground(Color.BLACK);
        imageLabel.setOpaque(true);
        add(imageLabel, BorderLayout.CENTER);
    }

    public void updateImage(byte[] jpeg) {
        SwingUtilities.invokeLater(() -> {
            ImageIcon icon = new ImageIcon(jpeg);
            imageLabel.setIcon(icon);
        });
    }
}
