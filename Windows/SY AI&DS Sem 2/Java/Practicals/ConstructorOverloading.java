import java.util.Scanner;

class ConstructorOverloading {
    public ConstructorOverloading(String n) {
        System.out.println("The name is: " + n);
    }

    public ConstructorOverloading(String n, int r) {
        System.out.println("The name is: " + n + "\nThe roll number is: " + r);

    }

    public ConstructorOverloading(String n, int r, double p) {
        System.out.println("The name is: " + n + "\nThe roll number is: " + r + "\nThe percentage is: " + p);
        System.out.println();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Name: ");
        String name = sc.nextLine();
        System.out.print("Enter roll no: ");
        int roll_no = sc.nextInt();
        System.out.print("Enter percentage: ");
        double percent = sc.nextDouble();
        System.out.println("\nConstructor 1");
        ConstructorOverloading obj1 = new ConstructorOverloading(name);
        System.out.println("\nConstructor 2");
        ConstructorOverloading obj2 = new ConstructorOverloading(name, roll_no);
        System.out.println("\nConstructor 3");
        ConstructorOverloading obj3 = new ConstructorOverloading(name, roll_no, percent);
        sc.close();
    }
}