import javax.swing.*;
import java.awt.event.*;

public class exp8 extends WindowAdapter {
    public void windowClosing(WindowEvent e) {
        int choice = JOptionPane.showConfirmDialog(
                null,
                "Are you sure want to exit ?",
                "Confirm Exit",
                JOptionPane.YES_NO_OPTION);
        if (choice == JOptionPane.YES_OPTION) {
            System.exit(0);
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setSize(400, 300);
        frame.addWindowListener(new exp8());
        frame.setVisible(true);
    }
}