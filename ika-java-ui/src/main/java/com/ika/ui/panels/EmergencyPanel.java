package com.ika.ui.panels;

import javax.swing.*;
import java.awt.*;
import java.util.function.Consumer;
import javax.swing.border.EmptyBorder;

public class EmergencyPanel extends JPanel {
    private JButton estopBtn;
    private JButton resetBtn;
    private JLabel statusLabel;
    private Consumer<Boolean> handler;
    private Timer blinkTimer;

    public EmergencyPanel() {
        setLayout(new BorderLayout(8,8));
        setBorder(new EmptyBorder(8,8,8,8));

        statusLabel = new JLabel("OK", SwingConstants.CENTER);
        statusLabel.setFont(statusLabel.getFont().deriveFont(Font.BOLD, 14f));
        statusLabel.setOpaque(true);
        statusLabel.setBackground(new Color(0x2E7D32)); // dark green
        statusLabel.setForeground(Color.WHITE);
        statusLabel.setBorder(new EmptyBorder(6,6,6,6));

        estopBtn = new JButton("EMERGENCY STOP");
        estopBtn.setBackground(new Color(0xB71C1C)); // Strong red
        estopBtn.setForeground(Color.WHITE);
        estopBtn.setFocusPainted(false);
        estopBtn.setFont(estopBtn.getFont().deriveFont(Font.BOLD, 22f));
        estopBtn.setPreferredSize(new Dimension(320, 90));
        estopBtn.setToolTipText("BAS: Tüm aktüatörleri durdur. Onay istenir.");

        resetBtn = new JButton("Reset Emergency");
        resetBtn.setFont(resetBtn.getFont().deriveFont(Font.BOLD, 14f));
        resetBtn.setEnabled(false);

        // estop action with confirmation
        estopBtn.addActionListener(e -> {
            int r = JOptionPane.showConfirmDialog(this, "Acil stop uygulanacak. Onaylıyor musunuz?", "EMERGENCY STOP", JOptionPane.YES_NO_OPTION);
            if (r == JOptionPane.YES_OPTION) {
                setEmergencyState(true);
                if (handler != null) handler.accept(true);
            }
        });

        resetBtn.addActionListener(e -> {
            int r = JOptionPane.showConfirmDialog(this, "Emergency reset yapılsın mı?", "RESET EMERGENCY", JOptionPane.YES_NO_OPTION);
            if (r == JOptionPane.YES_OPTION) {
                setEmergencyState(false);
                if (handler != null) handler.accept(false);
            }
        });

        JPanel center = new JPanel(new GridBagLayout());
        center.setOpaque(false);
        center.add(estopBtn);

        JPanel south = new JPanel(new BorderLayout());
        south.setOpaque(false);
        south.add(resetBtn, BorderLayout.WEST);
        south.add(statusLabel, BorderLayout.CENTER);

        add(statusLabel, BorderLayout.NORTH);
        add(center, BorderLayout.CENTER);
        add(south, BorderLayout.SOUTH);

        // Blink timer for emergency visual (initially stopped)
        blinkTimer = new Timer(500, ev -> {
            Color c = statusLabel.getBackground();
            if (c.equals(Color.RED)) statusLabel.setBackground(new Color(0xB71C1C));
            else statusLabel.setBackground(Color.RED);
        });
    }

    public void setEmergencyHandler(Consumer<Boolean> h) { this.handler = h; }

    public void setEmergencyState(boolean active) {
        SwingUtilities.invokeLater(() -> {
            estopBtn.setEnabled(!active);
            resetBtn.setEnabled(active);
            if (active) {
                statusLabel.setText("EMERGENCY ACTIVE");
                statusLabel.setBackground(Color.RED);
                statusLabel.setForeground(Color.WHITE);
                blinkTimer.start();
            } else {
                blinkTimer.stop();
                statusLabel.setText("OK");
                statusLabel.setBackground(new Color(0x2E7D32));
                statusLabel.setForeground(Color.WHITE);
            }
        });
    }
}

