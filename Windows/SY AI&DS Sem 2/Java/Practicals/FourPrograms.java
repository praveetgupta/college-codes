/*Greatest number of 3 numbers
   Scanner class - odd even
   Reversing the digit and addition
   Fibonacci
*/

import java.util.*;

public class FourPrograms {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1, n2, n3;
        System.out.println("-----Greatest of 3 numbers-----");
        System.out.println("Enter 3 numbers: ");
        n1 = sc.nextInt();
        n2 = sc.nextInt();
        n3 = sc.nextInt();
        if (n1 > n2 && n1 > n3) {
            System.out.println(n1 + " is the greatest of all.");
        } else if (n2 > n1 && n2 > n3) {
            System.out.println(n2 + " is the greatest of all.");
        } else {
            System.out.println(n3 + " is the greatest of all.");
        }
        System.out.println("\n-----Odd Even-----"); // Checking if a number is Odd or Even
        System.out.println("Enter a number: ");
        int n4 = sc.nextInt();
        if (n4 % 2 == 0) {
            System.out.println(n4 + " is even.");
        } else {
            System.out.println(n4 + " is odd.");
        }
        System.out.println("\n-----Reversing the digit and addition-----");
        System.out.println("Enter a number: ");
        int n5 = sc.nextInt();
        int reverse = 0, sum = 0, rem;
        do {
            rem = n5 % 10; // extracting last digit
            reverse = reverse * 10 + rem; // reversing the number
            sum = sum + rem; // sum of the digits of the reversed number
            n5 = n5 / 10;
        } while (n5 > 0);

        System.out.println("Reverse of given number: " + reverse);
        System.out.println("Sum of digits of reversed number: " + sum);

        System.out.println("\n-----Fibonacci-----");
        int n6 = 0, n7 = 1, n8, count = 10;
        System.out.print(n6 + " " + n7);

        for (int i = 2; i < count; i++) {
            n8 = n6 + n7;
            System.out.print(" " + n8);
            n6 = n7;
            n7 = n8;
        }
    }
}