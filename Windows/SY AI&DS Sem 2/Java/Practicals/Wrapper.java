/*Write a program using Wrapper class for conversion of primitive data to object and vice versa*/

public class Wrapper {
    public static void main(String[] args) {
        // Conversion of primitive data to object
        int i = 100;
        Integer integerObj = Integer.valueOf(i);
        System.out.println("Primitive data: " + i);
        System.out.println("Object data: " + integerObj);

        // Conversion of object to primitive data
        Double doubleObj = new Double(3.14);
        double d = doubleObj.doubleValue();
        System.out.println("Object data: " + doubleObj);
        System.out.println("Primitive data: " + d);
    }
}
