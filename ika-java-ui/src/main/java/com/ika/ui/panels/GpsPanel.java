package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class GpsPanel extends JPanel {
    private JLabel latLon;

    public GpsPanel() {
        setLayout(new BorderLayout());
        latLon = new JLabel("GPS: -- , --");
        add(latLon, BorderLayout.CENTER);
    }

    public void updateGps(double lat, double lon, double alt) {
        SwingUtilities.invokeLater(() -> latLon.setText(String.format("GPS: %.6f, %.6f (%.1fm)", lat, lon, alt)));
    }
}
