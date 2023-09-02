import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

class Calculator extends JFrame implements ActionListener {
    JTextField t;
    double num1, num2, result;
    char operator;

    Calculator() {
        t = new JTextField();
        t.setBounds(10, 10, 280, 30);
        add(t);

        String[] buttonsText = {"7", "8", "9", "+", "4", "5", "6", "-", "1", "2", "3", "=", "0"};
        JPanel panel = new JPanel(new GridLayout(4, 3));
        
        for (String buttonText : buttonsText) {
            JButton button = new JButton(buttonText);
            button.addActionListener(this);
            panel.add(button);
        }

        add(panel);
        setSize(300, 400);
        setLayout(new GridLayout(2, 1));
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        String command = e.getActionCommand();
        switch (command) {
            case "+":
            case "-":
                num1 = Double.parseDouble(t.getText());
                operator = command.charAt(0);
                t.setText("");
                break;
            case "=":
                num2 = Double.parseDouble(t.getText());
                switch (operator) {
                    case '+':
                        result = num1 + num2;
                        break;
                    case '-':
                        result = num1 - num2;
                        break;
                }
                t.setText(String.valueOf(result));
                break;
            default:
                t.setText(t.getText() + command);
                break;
        }
    }

    public static void main(String[] args) {
        new Calculator();
    }
}