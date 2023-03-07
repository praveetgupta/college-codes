import java.util.Scanner;

class Student {
    int rollNo;
    String name;

    void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter roll number: ");
        rollNo = sc.nextInt();
        System.out.print("Enter name: ");
        name = sc.next();
    }

    void display() {
        System.out.println("Roll number: " + rollNo);
        System.out.println("Name: " + name);
    }
}

class Attendance extends Student {
    int presentDays;

    void acceptAttendance() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of days present: ");
        presentDays = sc.nextInt();
        
    }

    void displayAttendance() {
        float avgAttendance = (float) presentDays / 180 * 100;
        System.out.println("Average attendance: " + avgAttendance + "%");
    }
}

public class attendanceCCA {
    public static void main(String[] args) {
        Attendance student1 = new Attendance();
        Attendance student2 = new Attendance();

        System.out.println("Enter details for student 1:");
        student1.accept();
        student1.acceptAttendance();

        System.out.println("Enter details for student 2:");
        student2.accept();
        student2.acceptAttendance();

        System.out.println("\nAttendance of student 1:");
        student1.display();
        student1.displayAttendance();

        System.out.println("\nAttendance of student 2:");
        student2.display();
        student2.displayAttendance();
    }
}
