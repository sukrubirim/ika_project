package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;

public class SensorStatusPanel extends JPanel {
    private JTextArea list;

    public SensorStatusPanel() {
        setLayout(new BorderLayout());
        list = new JTextArea(5,30);
        list.setEditable(false);
        add(new JScrollPane(list), BorderLayout.CENTER);
    }

    public void updateStatus(java.util.Map<String,String> sensors) {
        SwingUtilities.invokeLater(() -> {
            StringBuilder sb = new StringBuilder();
            sensors.forEach((k,v) -> sb.append(k).append(": ").append(v).append("\n"));
            list.setText(sb.toString());
        });
    }
}
