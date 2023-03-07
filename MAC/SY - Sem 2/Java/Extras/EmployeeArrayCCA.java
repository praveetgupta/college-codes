import java.util.*;

class Employee {
    int empid;
    String name;
    double salary;

    void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter employee ID: ");
        empid = sc.nextInt();
        System.out.print("Enter employee name: ");
        name = sc.next();
        System.out.print("Enter employee salary: ");
        salary = sc.nextDouble();
    }

    void display() {
        System.out.println("Employee ID: " + empid);
        System.out.println("Employee name: " + name);
        System.out.println("Employee salary: " + salary);
    }
}

public class EmployeeArrayCCA {
    public static void main(String[] args) {
        Employee[] empArray = new Employee[5];
        for (int i = 0; i < 5; i++) {
            System.out.println("Enter details for employee " + (i + 1) + ":");
            empArray[i] = new Employee();
            empArray[i].accept();
        }
        for (int i = 0; i < 5; i++) {
            System.out.println("Details for employee " + (i + 1) + ":");
            empArray[i].display();
        }
    }
}
