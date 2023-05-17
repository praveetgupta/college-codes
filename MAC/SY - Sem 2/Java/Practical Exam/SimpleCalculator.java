import javax.swing.*;
import java.awt.*;

public class SimpleCalculator {
    private JFrame frame;
    private JPanel panel;
    private JTextField textField;
    private JButton button1, button2, button3, button4, button5, button6, button7, button8, button9, button0, buttonAdd, buttonSub, buttonMul, buttonDiv, buttonClear, buttonEqual;

    public SimpleCalculator() {
        frame = new JFrame("Simple Calculator");
        panel = new JPanel(new GridLayout(4, 4, 5, 5));
        textField = new JTextField();

        // Buttons for numbers
        button1 = new JButton("1");
        button2 = new JButton("2");
        button3 = new JButton("3");
        button4 = new JButton("4");
        button5 = new JButton("5");
        button6 = new JButton("6");
        button7 = new JButton("7");
        button8 = new JButton("8");
        button9 = new JButton("9");
        button0 = new JButton("0");

        // Buttons for operators
        buttonAdd = new JButton("+");
        buttonSub = new JButton("-");
        buttonMul = new JButton("*");
        buttonDiv = new JButton("/");
        buttonClear = new JButton("C");
        buttonEqual = new JButton("=");

        // Adding components to the panel
        panel.add(button1);
        panel.add(button2);
        panel.add(button3);
        panel.add(buttonAdd);
        panel.add(button4);
        panel.add(button5);
        panel.add(button6);
        panel.add(buttonSub);
        panel.add(button7);
        panel.add(button8);
        panel.add(button9);
        panel.add(buttonMul);
        panel.add(buttonClear);
        panel.add(button0);
        panel.add(buttonEqual);
        panel.add(buttonDiv);

        // Adding components to the frame
        frame.add(textField, BorderLayout.NORTH);
        frame.add(panel, BorderLayout.CENTER);

        // Adding action listeners to the buttons
        button1.addActionListener(e -> textField.setText(textField.getText() + "1"));
        button2.addActionListener(e -> textField.setText(textField.getText() + "2"));
        button3.addActionListener(e -> textField.setText(textField.getText() + "3"));
        button4.addActionListener(e -> textField.setText(textField.getText() + "4"));
        button5.addActionListener(e -> textField.setText(textField.getText() + "5"));
        button6.addActionListener(e -> textField.setText(textField.getText() + "6"));
        button7.addActionListener(e -> textField.setText(textField.getText() + "7"));
        button8.addActionListener(e -> textField.setText(textField.getText() + "8"));
        button9.addActionListener(e -> textField.setText(textField.getText() + "9"));
        button0.addActionListener(e -> textField.setText(textField.getText() + "0"));

        buttonAdd.addActionListener(e -> textField.setText(textField.getText() + "+"));
        buttonSub.addActionListener(e -> textField.setText(textField.getText() + "-"));
        buttonMul.addActionListener(e -> textField.setText(textField.getText() + "*"));
        buttonDiv.addActionListener(e -> textField.setText(textField.getText() + "/"));

        buttonClear.addActionListener(e -> textField.setText(""));
        buttonEqual.addActionListener(e -> {
            String expression = textField.getText();
            double result = 0;
            try {
                result = evaluateExpression(expression);
            } catch (Exception ex) {
                textField.setText("Error");
            }
            textField.setText(String.valueOf(result));
        });

        // Setting frame properties
        frame.setSize(300, 300);
        frame.setLocationRelativeTo(null);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }

    private double evaluateExpression(String expression) throws Exception {
        double result = 0;
        String[] tokens = expression.split("(?<=[-+*/])|(?=[-+*/])");
        if (tokens.length < 3) {
            throw new Exception();
        }

        double operand1 = Double.parseDouble(tokens[0]);
        double operand2 = Double.parseDouble(tokens[2]);
        switch (tokens[1]) {
            case "+":
                result = operand1 + operand2;
                break;
            case "-":
                result = operand1 - operand2;
                break;
            case "*":
                result = operand1 * operand2;
                break;
            case "/":
                result = operand1 / operand2;
                break;
        }

        for (int i = 3; i < tokens.length; i += 2) {
            operand1 = result;
            operand2 = Double.parseDouble(tokens[i]);
            switch (tokens[i - 1]) {
                case "+":
                    result = operand1 + operand2;
                    break;
                case "-":
                    result = operand1 - operand2;
                    break;
                case "*":
                    result = operand1 * operand2;
                    break;
                case "/":
                    result = operand1 / operand2;
                    break;
            }
        }

        return result;
    }

    public static void main(String[] args) {
        new SimpleCalculator();
    }
}

