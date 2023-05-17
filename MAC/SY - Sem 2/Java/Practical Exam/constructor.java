public class constructor {
    private String name;
    private int age;
    private double marks;

    // constructor with no arguments
    public constructor() {
        this.name = "";
        this.age = 0;
        this.marks = 0.0;
    }

    // constructor with one argument
    public constructor(String name) {
        this.name = name;
        this.age = 0;
        this.marks = 0.0;
    }

    // constructor with two arguments
    public constructor(String name, int age) {
        this.name = name;
        this.age = age;
        this.marks = 0.0;
    }

    // constructor with three arguments
    public constructor(String name, int age, double marks) {
        this.name = name;
        this.age = age;
        this.marks = marks;
    }

    // method to display Students data
    public void display() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Marks: " + marks);
    }

    public static void main(String[] args) {
        // create 3 Student objects using different constructors
        constructor s1 = new constructor();
        constructor s2 = new constructor("Alice");
        constructor s3 = new constructor("Bob", 20, 75.5);

        // display the data of all 3 students
        System.out.println("Student 1:");
        s1.display();
        System.out.println("\nStudent 2:");
        s2.display();
        System.out.println("\nStudent 3:");
        s3.display();
    }
}
