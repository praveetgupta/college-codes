import javax.swing.*;
import java.awt.event.*;
public class actionListener_gr8Num implements ActionListener{
    public static void main(String[] args) {
        JFrame jf=new JFrame("Greatest Number");
        JTextField t1=new JTextField();
        JTextField t2=new JTextField();
        JButton b1=new JButton("Submit");
        JLabel jl=new JLabel();
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500,500);
        t1.setBounds(10, 10, 100, 20);
        t2.setBounds(110, 10, 100, 20);
        b1.setBounds(220, 10, 100, 20);
        jl.setBounds(220, 40, 200, 20);
        jf.add(t1);
        jf.add(t2);
        jf.add(b1);
        jf.add(jl);
        b1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int num1=Integer.parseInt(t1.getText());
                int num2=Integer.parseInt(t2.getText());
                if (num1>num2) {
                    jl.setText(num1+" is the greatest");
                } else {
                    jl.setText(num2+" is the greatest");
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
