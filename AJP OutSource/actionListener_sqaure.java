import javax.swing.*;
import java.awt.event.*;

public class actionListener_sqaure implements ActionListener{
    public static void main(String[] args) {
        JFrame jf=new JFrame();
        JTextField t1=new JTextField();
        JButton jb=new JButton("Submit");
        JLabel jl=new JLabel();
        jf.setLayout(null);
        jf.setSize(500, 500);
        jf.setVisible(true);
        t1.setBounds(10,10,100,20);
        jb.setBounds(110,10,100,20);
        jl.setBounds(10,40,300,20);
        jf.add(t1);
        jf.add(jb);
        jf.add(jl);
        jb.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                int num=Integer.parseInt(t1.getText());
                jl.setText("The square is: "+(num*num)+"The cube is: "+(num*num*num));
            }
        });
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
}
