import java.awt.event.*;
import javax.swing.*;

public class exp2_q2 implements ActionListener{
    public static void main(String[] args){
        JFrame jf=new JFrame("Sqaure of a number");
        JTextField num=new JTextField();
        JButton btn=new JButton("Square");
        JLabel square=new JLabel();
        jf.setSize(300, 300);
        jf.setVisible(true);
        jf.setLayout(null);
        num.setBounds(10, 10, 200, 20);
        btn.setBounds(10, 40, 100, 20);
        square.setBounds(10, 70, 200, 20);
        jf.add(num);
        jf.add(btn);
        jf.add(square);
        btn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int a=Integer.parseInt(num.getText());
                square.setText("The square of "+a+" is "+(a*a));
            }
        });
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
}
