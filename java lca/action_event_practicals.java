import javax.swing.*;
import java.awt.event.*;

public class action_event_practicals implements ActionListener {
    public static void main(String args[]) {
        JFrame jf = new JFrame();
        jf.setTitle("Action Event !!!");
        jf.setSize(750, 750);
        jf.setLayout(null);
        jf.setVisible(true);
        JTextField num1 = new JTextField();
        num1.setBounds(10, 10, 50, 50);
        JTextField num2 = new JTextField();
        num2.setBounds(70, 10, 50, 50);
        JButton b1 = new JButton("Add");
        b1.setBounds(10, 70, 50, 50);
        JButton b2 = new JButton("Subtract");
        b2.setBounds(70, 70, 50, 50);
        JButton b3 = new JButton("Sqaure");
        b3.setBounds(90, 70, 50, 50);
        JButton b4 = new JButton("Cube");
        b4.setBounds(170, 70, 50, 50);
        JLabel jl = new JLabel();
        jl.setBounds(90, 10, 120, 120);
        jf.add(num1);
        jf.add(num2);
        jf.add(b1);
        jf.add(b2);
        jf.add(b3);
        jf.add(b4);
        jf.add(jl);
        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num11 = Integer.parseInt(num1.getText());
                int num22 = Integer.parseInt(num2.getText());
                int add = num11 + num22;
                jl.setText("Addition = " + add);
            }
        });
        b2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num11 = Integer.parseInt(num1.getText());
                int num22 = Integer.parseInt(num2.getText());
                float sub = num11 - num22;
                jl.setText("Subtraction = " + sub);
            }
        });
        b3.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num11 = Integer.parseInt(num1.getText());
                int num22 = Integer.parseInt(num2.getText());
                int square = num11 * num11;
                jl.setText("Square = " + square);
            }
        });
        b4.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                int num11 = Integer.parseInt(num1.getText());
                int num22 = Integer.parseInt(num2.getText());
                int cube = num22 * num22 * num22;
                jl.setText("Cube = " + cube);
            }
        });
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
}