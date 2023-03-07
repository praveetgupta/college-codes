import java.util.*;

public class VectorExample {
  public static void main(String[] args) {
    
    Vector<String> myVector = new Vector<String>(3);
    myVector.add("apple");
    myVector.add("banana");
    myVector.add("orange");
    System.out.println("The first element is: " + myVector.get(0));
    System.out.println("The second element is: " + myVector.get(1));
    myVector.remove(2);
    System.out.println("The Vector contains: " + myVector);
    myVector.add("mango");
    myVector.add(2, "strawberry");
    System.out.println("The updated vector contains: " + myVector);
    System.out.println("Size of the vector is: " + myVector.size());
    System.out.println("Capacity of the vector is: " + myVector.capacity());
  }
}
