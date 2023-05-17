import javax.swing.*;
class biodata {
    public static void main(String args[]){
        JFrame jp = new JFrame();
        JLabel l1 = new JLabel("Name");
        JTextField t1 =  new JTextField("Name");
        JLabel l2 = new JLabel("Address");
        JTextArea a1 =  new JTextArea("Address");
        JButton b1 = new JButton("Submit");
        JLabel l3 = new JLabel("City");
        JCheckBox c1=new JCheckBox("Pune");
        JCheckBox c2=new JCheckBox("Mumbai");
        JCheckBox c3=new JCheckBox("Hydrabad");
        JCheckBox c4=new JCheckBox("Delhi");
        JLabel l4 = new JLabel("Gender");

        JRadioButton r1 = new JRadioButton("Male", null, false);
        JRadioButton r2 = new JRadioButton("Female", null, false);
        l1.setBounds(50,50,75,75);
        jp.add(l1);
        t1.setBounds(120,50,100,50);
        jp.add(t1);
        l2.setBounds(50,150,75,75);
        jp.add(l2);
        a1.setBounds(120,150,500,50);
        jp.add(a1);
        b1.setBounds(150,250,100,50);
        jp.add(b1);
        l3.setBounds(50,300,75,75);
        jp.add(l3);
        c1.setBounds(100,350,150,50);
        jp.add(c1);
        c2.setBounds(300,450,150,50);
        jp.add(c2);
        c3.setBounds(100,450,150,50);
        jp.add(c3);
        c4.setBounds(300,350,150,50);
        jp.add(c4);
        l4.setBounds(50,500,75,75);
        r1.setBounds(80,550,75,75);
        jp.add(r1);
        r2.setBounds(160,550,75,75);
        jp.add(r2);
        jp.add(l4);
        jp.setSize(300,300);
        jp.setLayout(null);
        jp.setVisible(true);

    }
}