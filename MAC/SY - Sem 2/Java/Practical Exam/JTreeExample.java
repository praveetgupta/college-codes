import javax.swing.*;
import javax.swing.tree.DefaultMutableTreeNode;

public class JTreeExample {
    public static void main(String[] args) {
        // create a JFrame to hold the JTree
        JFrame frame = new JFrame("JTree Example");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        // create a root node for the JTree
        DefaultMutableTreeNode root = new DefaultMutableTreeNode("Fruits");

        // create child nodes for the root node
        DefaultMutableTreeNode citrusNode = new DefaultMutableTreeNode("Citrus");
        DefaultMutableTreeNode appleNode = new DefaultMutableTreeNode("Apples");
        DefaultMutableTreeNode bananaNode = new DefaultMutableTreeNode("Bananas");

        // add child nodes to the root node
        root.add(citrusNode);
        root.add(appleNode);
        root.add(bananaNode);

        // create child nodes for the citrus node
        DefaultMutableTreeNode lemonNode = new DefaultMutableTreeNode("Lemon");
        DefaultMutableTreeNode orangeNode = new DefaultMutableTreeNode("Orange");

        // add child nodes to the citrus node
        citrusNode.add(lemonNode);
        citrusNode.add(orangeNode);

        // create a JTree with the root node
        JTree tree = new JTree(root);

        // add the JTree to a JPanel
        JPanel panel = new JPanel();
        panel.add(tree);

        // add the JPanel to the JFrame
        frame.add(panel);

        // set the size of the JFrame and show it
        frame.setSize(300, 400);
        frame.setVisible(true);
    }
}
