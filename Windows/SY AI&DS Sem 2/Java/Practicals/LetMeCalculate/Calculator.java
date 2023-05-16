//package file
package LetMeCalculate;

import java.util.*;

public class Calculator {
    int num1, num2;

    public void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        num1 = sc.nextInt();
        num2 = sc.nextInt();
        sc.close();
    }

    public void calc() {
        System.out.println("The sum is: " + (num1 + num2));
    }
}
