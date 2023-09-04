import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Exp3 extends JFrame implements ActionListener {
    JTextField t1;
    JButton add, sub, mul, div, equal, clear;
    Button numbers[] = new Button[10];
    float n1, n2, result;
    char operator;

    Exp3() {
        setTitle("Calculator");
        setSize(300, 400);
        setLayout(new GridLayout(4, 4));
        t1 = new JTextField();
        t1.setColumns(10);
        t1.setEditable(false);
        for (int i = 0; i < 10; i++) {
            numbers[i] = new Button("" + i);
        }
        add = new JButton("+");
        sub = new JButton("-");
        mul = new JButton("*");
        div = new JButton("/");
        equal = new JButton("=");
        clear = new JButton("C");
        add(t1);
        add(add);
        add(sub);
        add(mul);
        add(div);
        add(equal);
        add(clear);
        for (int i = 0; i < 10; i++) {
            add(numbers[i]);
            pack();
            setLocationRelativeTo(null);
            setVisible(true);
        }
        for (int i = 0; i < 10; i++) {
            numbers[i].addActionListener(this);
        }
        add.addActionListener(this);
        sub.addActionListener(this);
        mul.addActionListener(this);
        div.addActionListener(this);
        clear.addActionListener(this);
        equal.addActionListener(this);
    }

    public void actionPerformed(ActionEvent e) {
        Object source = e.getSource();
        for (int i = 0; i < 10; i++) {
            if (source == numbers[i]) {
                t1.setText(t1.getText() + i);
            }
        }
        if (e.getSource() == add) {
            n1 = Integer.parseInt(t1.getText());
            operator = '+';
            t1.setText("");
        } else if (e.getSource() == sub) {
            n1 = Integer.parseInt(t1.getText());
            operator = '-';
            t1.setText("");
        } else if (e.getSource() == mul) {
            n1 = Integer.parseInt(t1.getText());
            operator = '*';
            t1.setText("");
        } else if (e.getSource() == div) {
            n1 = Float.parseFloat(t1.getText());
            operator = '/';
            t1.setText("");
        } else if (e.getSource() == clear) {
            t1.setText("");
        } else if (e.getSource() == equal) {
            n2 = Integer.parseInt(t1.getText());
            switch (operator) {
                case '+':
                    result = n1 + n2;
                    break;
                case '-':
                    result = n1 - n2;
                    break;
                case '*':
                    result = n1 * n2;
                    break;
                case '/':
                    result = n1 / n2;
                    break;
            }
            t1.setText(String.valueOf(result));
        }
    }

    public static void main(String[] args) {
        new Exp3();
    }
}