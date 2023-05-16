/*Program on Vector. Add five elements in vector then add one element then
 add one element using elementAt(),show execution of size() and capacity().
 */

import java.util.Vector;

public class Vectors {
    public static void main(String[] args) {
        Vector<Integer> vec = new Vector<Integer>(5);

        // Add elements to the vector
        vec.add(10);
        vec.add(20);
        vec.add(30);
        vec.add(40);
        vec.add(50);

        // Display the size and capacity of the vector
        System.out.println("Initial size: " + vec.size());
        System.out.println("Initial capacity: " + vec.capacity());

        // Add an element to the vector
        vec.add(60);

        // Display the size and capacity of the vector after adding an element
        System.out.println("Size after adding an element: " + vec.size());
        System.out.println("Capacity after adding an element: " + vec.capacity());

        // Add another element to the vector using the elementAt() method
        vec.insertElementAt(70, 2);

        // Display the size and capacity of the vector after adding another element
        System.out.println("Size after adding another element: " + vec.size());
        System.out.println("Capacity after adding another element: " + vec.capacity());
        System.out.println("The element at index 2 is: " + vec.elementAt(2));
    }
}
