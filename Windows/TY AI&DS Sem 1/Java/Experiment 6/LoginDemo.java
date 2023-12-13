import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class LoginDemo extends JFrame implements ActionListener {
    JTextField usernameField;
    JPasswordField passwordField;
    JLabel messageLabel;

    public LoginDemo() {
        setTitle("LOGIN PAGE");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(300, 120);
        setLocationRelativeTo(null); // centres the window
        usernameField = new JTextField(20);
        passwordField = new JPasswordField(20);
        JButton loginbutton = new JButton("LOGIN");
        messageLabel = new JLabel("");
        JPanel p = new JPanel();
        p.setLayout(new GridLayout(3, 2));
        p.add(new JLabel("Username: "));
        p.add(usernameField);
        p.add(new JLabel("Password: "));
        p.add(passwordField);
        p.add(new JLabel("")); // empty label for spacing
        p.add(loginbutton);
        loginbutton.addActionListener(this);
        add(p, BorderLayout.CENTER);
        add(messageLabel, BorderLayout.SOUTH);
    }

    public void actionPerformed(ActionEvent ae) {
        String username = usernameField.getText();
        char[] pwd = passwordField.getPassword();
        String password = new String(pwd);
        if (username.equals("Sammed") && password.equals("Sagare")) {
            messageLabel.setText("LOGIN SUCCESSFUL");
        } else {
            messageLabel.setText("LOGIN UN-SUCCESSFUL");
        }
    }

    public static void main(String args[]) {
        SwingUtilities.invokeLater(new Runnable() {
            public void run() {
                new LoginDemo().setVisible(true);
            }
        });
    }
}
