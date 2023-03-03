import java.util.*;
public class switch_case{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int c, a, b;
        System.out.println("Enter the values of a and b");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.println("Enter 1 to perform addition\nEnter 2 to perform subtraction\nEnter 3 to perform multiplication\nEnter 4 to perform division.");
        System.out.println("Enter your choice");
        int choice = sc.nextInt();
        switch (choice) {
            case 1:
                c = a+b;
                System.out.println("Addition: "+c);
                break;
            case 2:
                c = a-b;
                System.out.println("Subtraction: "+c);
                break;
            case 3:
                c = a*b;
                System.out.println("Multiplication: "+c);
                break;
            case 4:
                c = a/b;
                System.out.println("Division: "+c);
                break;
            default:
                System.out.println("Wrong choice:D");
        }
        sc.close();
    }
}