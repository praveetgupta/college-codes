import javax.swing.*;
import java.awt.event.*;

public class exp4_q1 implements ItemListener {
    public static void main(String[] args){
        JFrame jf = new JFrame("Item Listener");
        JLabel jl = new JLabel();
        JCheckBox c = new JCheckBox("c");
        JCheckBox java = new JCheckBox("java");
        JCheckBox cpp = new JCheckBox("c++");
        jf.setLayout(null);
        jf.setSize(500,500);
        jf.setVisible(true);
        jf.setTitle("Item Listener");
        c.setBounds(10, 30, 60, 40);
        java.setBounds(10,80,60,40);
        cpp.setBounds(10,130,60,40);
        jl.setBounds(100,50,140,40);
        jf.add(jl);
        jf.add(c);
        jf.add(java);
        jf.add(cpp);
        c.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e){
                jl.setText("C");
            }
        });
        java.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e){
                jl.setText("JAVA");
            }
        });
        cpp.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent e){
                jl.setText("C++");
            }
        });
    }
    @Override
    public void itemStateChanged(ItemEvent e) {
        // TODO Auto-generated method stub
        throw new UnsupportedOperationException("Unimplemented method 'ItemStateChanged()'");
    }
}
