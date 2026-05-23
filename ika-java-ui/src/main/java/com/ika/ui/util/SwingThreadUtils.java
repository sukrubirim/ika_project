package com.ika.ui.util;

import javax.swing.SwingUtilities;
import java.lang.Runnable;

public class SwingThreadUtils {
    public static void runOnUi(Runnable r) {
        if (SwingUtilities.isEventDispatchThread()) r.run();
        else SwingUtilities.invokeLater(r);
    }
}
