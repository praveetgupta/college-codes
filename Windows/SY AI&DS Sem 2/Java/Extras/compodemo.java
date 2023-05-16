import javax.swing.*;

class compodemo {
    public static void main(String[] args) {
        JFrame jp = new JFrame();

        JLabel l1 = new JLabel("Name");
        l1.setBounds(50, 50, 75, 75);
        jp.add(l1);

        JTextField t1 = new JTextField();
        t1.setBounds(150, 75, 100, 25);
        jp.add(t1);

        JLabel l2 = new JLabel("Address");
        l2.setBounds(50, 75, 75, 75);
        jp.add(l2);

        JTextArea t2 = new JTextArea();
        t2.setBounds(150, 100, 200, 50);
        jp.add(t2);

        JCheckBox c1 = new JCheckBox("Pune");
        JCheckBox c2 = new JCheckBox("Mumbai");
        JCheckBox c3 = new JCheckBox("Delhi");
        c1.setBounds(50, 200, 200, 20);
        c2.setBounds(50, 250, 200, 20);
        c3.setBounds(50, 300, 200, 20);
        jp.add(c1);
        jp.add(c2);
        jp.add(c3);

        JTextArea t3 = new JTextArea();
        t3.setBounds(150, 100, 200, 50);
        jp.add(t3);
        JButton b1 = new JButton("Click");
        b1.setBounds(50, 350, 75, 75);
        
        jp.add(b1);

        JLabel l3 = new JLabel("Gender");
        l3.setBounds(50, 475, 150, 20);
        jp.add(l3);

        JRadioButton r1 = new JRadioButton("Male");
        r1.setBounds(50, 500, 100, 20);
        jp.add(r1);

        JRadioButton r2 = new JRadioButton("Female");
        r2.setBounds(200, 500, 100, 20);
        
        // create an ImageIcon
        ImageIcon icon = new ImageIcon("E:\\SY AI&DS Sem 2\\Java\\aryan.png");
        
        // set the icon to the radio button
        // r2.setIcon(icon);
        b1.setIcon(icon);
        jp.add(r2);

        // group the radio buttons so that only one can be selected at a time
        ButtonGroup group = new ButtonGroup();
        group.add(r1);
        group.add(r2);

        jp.setSize(500, 600);
        jp.setLayout(null);
        jp.setVisible(true);
    }
}
