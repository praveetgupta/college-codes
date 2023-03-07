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

public class employeeCCA {
    public static void main(String[] args) {
        Employee emp1 = new Employee();
        Employee emp2 = new Employee();
        Scanner sc = new Scanner(System.in);
        
        System.out.println("Enter details for employee 1:");
        emp1.accept();
        
        System.out.println("Enter details for employee 2:");
        emp2.accept();
        
        System.out.println("Employee 1 details:");
        emp1.display();
        
        System.out.println("Employee 2 details:");
        emp2.display();
        
        sc.close();
    }
}
