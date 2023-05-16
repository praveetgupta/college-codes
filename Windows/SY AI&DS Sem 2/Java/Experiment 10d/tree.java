import javax.swing.*;
import javax.swing.tree.DefaultMutableTreeNode;

public class tree {
    tree() {
        JFrame f = new JFrame();
        DefaultMutableTreeNode Subjects = new DefaultMutableTreeNode("Subjects");// style
        DefaultMutableTreeNode DBMS = new DefaultMutableTreeNode("DBMS");// color
        DefaultMutableTreeNode DSF = new DefaultMutableTreeNode("DSF");// font
        Subjects.add(DBMS);
        Subjects.add(DSF);
        DefaultMutableTreeNode Experiment1 = new DefaultMutableTreeNode("Experiment1");
        DefaultMutableTreeNode Experiment2 = new DefaultMutableTreeNode("Experiment2");
        DefaultMutableTreeNode Experiment3 = new DefaultMutableTreeNode("Experiment3");
        DefaultMutableTreeNode Experiment4 = new DefaultMutableTreeNode("Experiment4");
        DBMS.add(Experiment1);
        DBMS.add(Experiment2);
        DSF.add(Experiment3);
        DSF.add(Experiment4);
        JTree jt = new JTree(Subjects);
        f.add(jt);
        f.setSize(500, 500);
        f.setVisible(true);
    }

    public static void main(String[] args) {
        new tree();
    }
}