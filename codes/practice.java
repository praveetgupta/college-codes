import javax.swing.*;
import java.awt.event.*;

public class practice implements ActionListener{
    public static void main(String[] args) {
        JFrame jf=new JFrame("Calculator");
        JTextField num1=new JTextField();
        JTextField num2=new JTextField();
        JLabel res=new JLabel();
        JButton add=new JButton("Add");
        JButton subtract=new JButton("Subtract");
        JButton multiply=new JButton("Multiply");
        JButton divide=new JButton("Divide");
        JButton square=new JButton("Square");
        JButton cube=new JButton("Cube");
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(800, 800);
        num1.setBounds(10, 10, 50, 20);
        num2.setBounds(70, 10, 50, 20);
        res.setBounds(130, 10, 250, 20);
        add.setBounds(10, 40, 80, 20);
        subtract.setBounds(100, 40, 90, 20);
        multiply.setBounds(200, 40, 80, 20);
        divide.setBounds(290, 40, 80, 20);
        square.setBounds(380, 40, 80, 20);
        cube.setBounds(470, 40, 80, 20);
        jf.add(num1);
        jf.add(num2);
        jf.add(add);
        jf.add(subtract);
        jf.add(multiply);
        jf.add(divide);
        jf.add(square);
        jf.add(cube);
        jf.add(res);
        add.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int a=Integer.parseInt(num1.getText());
                int b=Integer.parseInt(num2.getText());
                res.setText("Answer:"+(a+b));
            }
        });
        subtract.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int a=Integer.parseInt(num1.getText());
                int b=Integer.parseInt(num2.getText());
                res.setText("Answer:"+(a-b));
            }
        });
        multiply.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int a=Integer.parseInt(num1.getText());
                int b=Integer.parseInt(num2.getText());
                res.setText("Answer:"+(a*b));
            }
        });
        divide.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int a=Integer.parseInt(num1.getText());
                int b=Integer.parseInt(num2.getText());
                if (b>a) {
                    res.setText("The First Value must be bigger");
                }
                else{
                    res.setText("Answer:"+(a/b));
                }
            }
        });
        square.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int a=Integer.parseInt(num1.getText());
                // int b=Integer.parseInt(num2.getText());
                res.setText("Answer:"+(a*a));
            }
        });
        cube.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                // int a=Integer.parseInt(num1.getText());
                int b=Integer.parseInt(num2.getText());
                res.setText("Answer:"+(b*b*b));
            }
        });

    }
    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    } 
    
}