import java.util.*;

public class wrapper {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number");
        int a = sc.nextInt();
        Integer i = a; 
        System.out.println("Integer object is " + i);
        int b = i;
        System.out.println("Primitive data is " + b);
        sc.close();
    }
}
