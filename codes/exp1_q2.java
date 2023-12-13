import java.awt.event.*;
import javax.swing.*;

public class exp1_q2 implements ActionListener{
    public static void main(String[] args) {
        JFrame jf=new JFrame("Action Listener");
        JButton yBtn=new JButton("Yes");
        JButton nBtn=new JButton("No");
        JButton eBtn=new JButton("Exit");
        JLabel jl=new JLabel();
        jf.setLayout(null);
        jf.setSize(500, 500);
        jf.setVisible(true);
        jf.setTitle("Action Listener");
        yBtn.setBounds(10,30,60,40);
        nBtn.setBounds(10,80,60,40);
        eBtn.setBounds(10,130,60,40);
        jl.setBounds(100, 50, 140, 40);
        jf.add(jl);
        jf.add(yBtn);
        jf.add(nBtn);
        jf.add(eBtn);
        yBtn.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                jl.setText("You pressed Yes");
            }
        });
        nBtn.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                jl.setText("You pressed No");
            }
        });
        eBtn.addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e) {
                jl.setText("You pressed Exit");
            }
        });   
    }
    
    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
}