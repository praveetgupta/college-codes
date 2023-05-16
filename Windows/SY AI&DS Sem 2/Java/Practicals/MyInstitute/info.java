//package file
package MyInstitute;
import java.util.*;

public class info {
    int marks, roll_no;
    String name;

    public void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter name of the student: ");
        name = sc.nextLine();
        System.out.println("Enter roll number of student: ");
        roll_no = sc.nextInt();
        System.out.println("Enter marks of student: ");
        marks = sc.nextInt();
        sc.close();
    }

    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + roll_no);
        System.out.println("Marks: " + marks);
    }
}