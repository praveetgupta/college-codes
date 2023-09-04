import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Exp4 {
    public Exp4() {
        JFrame frame = new JFrame("Checkbox Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 150);

        JPanel panel = new JPanel();

        JCheckBox javaCheckbox = new JCheckBox("Java");
        JCheckBox cCheckbox = new JCheckBox("C");
        JCheckBox cppCheckbox = new JCheckBox("C++");

        JLabel messageLabel = new JLabel("");

        ItemListener itemListener = new ItemListener() {
            public void itemStateChanged(ItemEvent e) {
                String message = "You have selected: ";
                if (javaCheckbox.isSelected()) {
                    message += "Java ";
                }
                if (cCheckbox.isSelected()) {
                    message += "C ";
                }
                if (cppCheckbox.isSelected()) {
                    message += "C++ ";
                }
                messageLabel.setText(message);
            }
        };

        javaCheckbox.addItemListener(itemListener);
        cCheckbox.addItemListener(itemListener);
        cppCheckbox.addItemListener(itemListener);

        panel.add(javaCheckbox);
        panel.add(cCheckbox);
        panel.add(cppCheckbox);
        panel.add(messageLabel);

        frame.add(panel);
        frame.setVisible(true);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new Exp4();
            }
        });
    }
}
