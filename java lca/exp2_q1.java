import javax.swing.*;
import java.awt.event.*;

public class exp2_q1 implements ActionListener {
    public static void main(String[] args) {
        JFrame jf = new JFrame("Largest Number");
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500, 500);
        JTextField num1 = new JTextField();
        JTextField num2 = new JTextField();
        JLabel largestNum = new JLabel();
        JButton btn = new JButton("Largest");
        num1.setBounds(10, 10, 50,20);
        num2.setBounds(10, 40, 50,20);
        btn.setBounds(10, 70, 100, 20);
        largestNum.setBounds(10, 110,150, 20);
        jf.add(num1);
        jf.add(num2);
        jf.add(btn);
        jf.add(largestNum);
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
            int a = Integer.parseInt(num1.getText());
            int b = Integer.parseInt(num2.getText());
                if (a > b) {
                    largestNum.setText(a + " is greater");
                }
                else{
                    largestNum.setText(b + " is greater");
                }
            }
        });
    }
    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }

}