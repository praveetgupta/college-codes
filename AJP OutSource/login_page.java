import java.awt.event.*;
import javax.swing.*;
public class login_page implements ActionListener{
    public static void main(String[] args) {
        JFrame jf=new JFrame();
        JTextField t1=new JTextField();
        JPasswordField p1=new JPasswordField();
        JButton jb=new JButton("Submit");
        JLabel jl=new JLabel();
        jf.setLayout(null);
        jf.setVisible(true);
        jf.setSize(500,500);
        t1.setBounds(10, 10, 100, 20);
        p1.setBounds(10, 40, 100, 20);
        jb.setBounds(10, 70, 100, 20);
        jl.setBounds(10, 100, 200, 20);
        jf.add(t1);
        jf.add(p1);
        jf.add(jb);
        jf.add(jl);
        jb.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e)
            {
                String username=t1.getText();
                String password=p1.getText();
                if (username.equals("adi09")&& password.equals("adi@123")) {
                    jl.setText("Login succesful");
                }
                else{
                    jl.setText("Login unsuccesfull");
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
