//Write a program using Wrapper class for conversion of primitive data to object and vice versa
import java.util.*;

class second {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int a = sc.nextInt();
        Integer i = new Integer(a);
        System.out.println("Integer object is " + i);
        int b = i.intValue();
        System.out.println("Primitive data is " + b);
    }
}
