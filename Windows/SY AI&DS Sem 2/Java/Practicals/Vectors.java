
/*Program on Vector. Add five elements in vector then add one element then
 add one element using elementAt(),show execution of size() and capacity().
 */
import java.util.*;

public class Vectors {
    public static void main(String[] args) {
        // create a Vector with five initial elements Vector<String> v = new
        Vector<String> v = new Vector<String>();
        v.add("Sammed");
        v.add("Aryan");
        v.add("Praveet");
        v.add("Godwin");
        v.add("Sarthak");
        // display the initial elements
        System.out.println("Initial elements: " + v);
        // add a new element to the end of the vector
        v.add("Ameya");
        // display the updated elements
        System.out.println("Elements after adding one element: " + v);
        // retrieve an element using elementAt()
        String element = v.elementAt(3);
        System.out.println("Element at index 3: " + element);
        // display the size and capacity of the vector
        System.out.println("Size of vector: " + v.size());
        System.out.println("Capacity of vector: " + v.capacity());
    }
}