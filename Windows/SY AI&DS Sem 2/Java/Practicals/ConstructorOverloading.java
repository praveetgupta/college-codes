// Display 3 students data using constructor overloading


import java.util.*;

public class Student {
    private String name;
    private int rollNo;
    private double percentage;

    // Constructor with no arguments
    public Student() {}

    // Constructor with name and rollNo arguments
    public Student(String name, int rollNo) {
        this.name = name;
        this.rollNo = rollNo;
    }

    // Constructor with all arguments
    public Student(String name, int rollNo, double percentage) {
        this.name = name;
        this.rollNo = rollNo;
        this.percentage = percentage;
    }

    // Getter methods
    public String getName() {
        return name;
    }

    public int getRollNo() {
        return rollNo;
    }

    public double getPercentage() {
        return percentage;
    }

    public static void main(String[] args) {
        // Creating objects of Student class using different constructors
        Student s1 = new Student();
        Student s2 = new Student("John", 101);
        Student s3 = new Student("Jane", 102, 80.5);

        // Displaying data of 3 students
        System.out.println("Student 1: " + s1.getName() + " " + s1.getRollNo() + " " + s1.getPercentage());
        System.out.println("Student 2: " + s2.getName() + " " + s2.getRollNo() + " " + s2.getPercentage());
        System.out.println("Student 3: " + s3.getName() + " " + s3.getRollNo() + " " + s3.getPercentage());
    }
}

/*In this program, we have created a Student class with three private member variables: name, rollNo, and percentage.
We have defined three constructors for this class. The first constructor is a no-argument constructor, which doesn't take any arguments.
The second constructor takes two arguments - name and rollNo. The third constructor takes all three arguments - name, rollNo, and percentage.
We have also defined getter methods for each member variable to access them from outside the class.
In the main() method, we have created three objects of the Student class using different constructors.
We have displayed the data of these three students using the getter methods.*/