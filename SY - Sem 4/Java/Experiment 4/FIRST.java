
/*Program on Vector. Add five elements in vector then add one element then add one element using elementAt(),show execution of size() and capacity(). */
import java.util.*;

class FIRST {
    public static void main(String args[]) {
        Vector v = new Vector();
        v.addElement("A");
        v.addElement("B");
        v.addElement("C");
        v.addElement("D");
        v.addElement("E");
        System.out.println("Vector is:" + v);
        v.addElement("F");
        System.out.println("Vector is:" + v);
        System.out.println("Element at 3rd position is:" + v.elementAt(3));
        System.out.println("Size of vector is:" + v.size());
        System.out.println("Capacity of vector is:" + v.capacity());
    }
}
