import java.awt.*;
import javax.swing.*;

class SimpleCalculator {
    private JFrame frame;
    private JTextField displayField;
    private JPanel buttonPanel;

    public SimpleCalculator() {
        frame = new JFrame("Simple Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        displayField = new JTextField();
        displayField.setEditable(false);

        buttonPanel = new JPanel(new GridLayout(4, 4));
        addButton("7");
        addButton("8");
        addButton("9");
        addButton("/");
        addButton("4");
        addButton("5");
        addButton("6");
        addButton("*");
        addButton("1");
        addButton("2");
        addButton("3");
        addButton("-");
        addButton("0");
        addButton(".");
        addButton("=");
        addButton("+");

        frame.add(displayField, BorderLayout.NORTH);
        frame.add(buttonPanel, BorderLayout.CENTER);

        frame.pack();
        frame.setVisible(true);
    }

    private void addButton(String label) {
        JButton button = new JButton(label);
        buttonPanel.add(button);
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new SimpleCalculator();
            }
        });
    }
}
