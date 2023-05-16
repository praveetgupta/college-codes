/*Accept and display name, roll no, percentage of 2 students*/

import java.util.*;

class Percentage {
    String name;
    int roll_no;
    double percent;
    Scanner sc = new Scanner(System.in);

    void accept() {
        System.out.print("\nEnter name: ");
        name = sc.nextLine();
        System.out.print("Enter Roll number: ");
        roll_no = sc.nextInt();
        System.out.print("Enter Percentage: ");
        percent = sc.nextDouble();
    }

    void display() {
        System.out.println("\nThe name is: " + name + "\nThe roll number is: "
                + roll_no + "\nThe percentage is: " + percent);
    }

    public static void main(String args[]) {
        Percentage obj1 = new Percentage();
        Percentage obj2 = new Percentage();
        obj1.accept();
        obj2.accept();
        obj1.display();
        obj2.display();
    }
}
