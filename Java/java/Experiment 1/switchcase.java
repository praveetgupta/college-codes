//switch case for arithmetic operations
import java.io.*;
import java.util.*;
public class switchcase {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num1 = in.nextInt();
        System.out.println("Enter another number:");
        int num2 = in.nextInt();
        System.out.println("Enter an operator (+, -, *, /):");
        char op = in.next().charAt(0);
        int result;
        switch(op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            default:
                System.out.println("You have entered an invalid operator");
                return;
        }
        System.out.println(num1 + " " + op + " " + num2 + " = " + result);
    }
}