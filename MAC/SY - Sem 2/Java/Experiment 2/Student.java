import java.util.Scanner;

class student {
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
        percent = sc.nextInt();
    }

    void display() {
        System.out.println("\nThe name is: " + name + "\nThe roll number is: "
                + roll_no + "\nThe percentage is: " + percent);
    }

    public static void main(String arg[]) {
        student obj1 = new student();
        student obj2 = new student();
        obj1.accept();
        obj2.accept();
        obj1.display();
        obj2.display();
    }
}
