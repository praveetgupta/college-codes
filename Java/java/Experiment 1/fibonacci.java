//fibonaaci series
import java.io.*;
import java.util.*;
public class fibonacci {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number:");
        int num = in.nextInt();
        int a = 0, b = 1, c = 0;
        System.out.print(a + " " + b);
        for (int i = 2; i < num; i++) {
            c = a + b;
            System.out.print(" " + c);
            a = b;
            b = c;
        }
    }
}