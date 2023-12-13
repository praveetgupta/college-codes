import java.awt.event.*;
import javax.swing.*;

public class action_listener_yesNo implements ActionListener {
    public static void main(String[] args) {
        JFrame jf = new JFrame();
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500, 500);
        JButton jb = new JButton("Yes");
        JButton jb1 = new JButton("No");
        JButton jb2 = new JButton("Exit");
        JLabel jl = new JLabel();
        jb.setBounds(10, 10, 100, 20);
        jb1.setBounds(10, 40, 100, 20);
        jb2.setBounds(10, 70, 100, 20);
        jl.setBounds(10, 100, 200, 20);
        jf.add(jb);
        jf.add(jb1);
        jf.add(jb2);
        jf.add(jl);
        jb.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jl.setText("Yes Clicked !!");
            }
        });
        jb1.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jl.setText("No Clicked !!");
            }
        });
        jb2.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                jl.setText("Exit Clicked !!");
            }
        });
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'actionPerformed'");
    }
}
