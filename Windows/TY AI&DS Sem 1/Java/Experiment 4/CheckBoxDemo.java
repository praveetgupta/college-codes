DONT USE THIS CODE

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class CheckBoxDemo extends JFrame implements ItemListener {
    JCheckBox javaCheckBox, cCheckBox, cppCheckBox;
    JTextArea messageArea;

    CheckBoxDemo() {
        setTitle("Experiment 4");
        setSize(400, 250);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBackground(Color.BLACK);
        setForeground(Color.WHITE);
        JPanel panel = new JPanel();
        panel.setLayout(new GridLayout(4, 1));
        panel.setBackground(Color.BLACK);
        panel.setForeground(Color.CYAN);
        javaCheckBox = new JCheckBox("Java");
        javaCheckBox.setBackground(Color.BLACK);
        javaCheckBox.setForeground(Color.CYAN);
        cCheckBox = new JCheckBox("C");
        cCheckBox.setBackground(Color.BLACK);
        cCheckBox.setForeground(Color.CYAN);
        cppCheckBox = new JCheckBox("C++");
        cppCheckBox.setBackground(Color.BLACK);
        cppCheckBox.setForeground(Color.CYAN);
        JLabel label = new JLabel("Select your favorite programming languages:");
        label.setForeground(Color.CYAN);
        panel.add(label);
        panel.add(javaCheckBox);
        panel.add(cCheckBox);
        panel.add(cppCheckBox);
        JButton submitButton = new JButton("Submit");
        submitButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                StringBuilder message = new StringBuilder("You have selected: ");
                int count = 0;
                if (javaCheckBox.isSelected()) {
                    message.append("Java, ");
                    count++;
                }
                if (cCheckBox.isSelected()) {
                    message.append("C, ");
                    count++;
                }
                if (cppCheckBox.isSelected()) {
                    message.append("C++, ");
                    count++;
                }
                if (count == 0) {
                    messageArea.setText("Please select at least one language.");
                } else {
                    message.delete(message.length() - 2, message.length());
                    messageArea.setText(message.toString() + " (" + count + " selected)");
                }
            }
        });
        submitButton.setBackground(Color.RED);
        submitButton.setForeground(Color.WHITE);
        panel.add(submitButton);
        JButton clearButton = new JButton("Clear");
        clearButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                javaCheckBox.setSelected(false);
                cCheckBox.setSelected(false);
                cppCheckBox.setSelected(false);
                messageArea.setText("");
            }
        });
        clearButton.setBackground(Color.WHITE);
        clearButton.setForeground(Color.BLACK);
        panel.add(clearButton);
        messageArea = new JTextArea(5, 30);
        messageArea.setEditable(false);
        messageArea.setWrapStyleWord(true);
        messageArea.setLineWrap(true);
        JScrollPane scrollPane = new JScrollPane(messageArea);
        panel.add(scrollPane);
        add(panel);
        messageArea.setBackground(Color.BLACK);
        messageArea.setForeground(Color.CYAN);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new CheckBoxDemo().setVisible(true);
            }
        });
    }

    @Override
    public void itemStateChanged(ItemEvent e) {
    }
}