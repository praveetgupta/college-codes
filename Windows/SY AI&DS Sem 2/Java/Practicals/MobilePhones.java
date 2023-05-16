/*Accept and display company name, screen size and price of 3 mobile  phones*/

import java.util.*;

public class MobilePhones {
    String name;
    double size, price;
    Scanner sc = new Scanner(System.in);

    void accept() {
        System.out.println("\nEnter company name, screen size, and price: ");
        name = sc.nextLine();
        size = sc.nextDouble();
        price = sc.nextDouble();
    }

    void display() {
        System.out.println("\nCompany Name: " + name);
        System.out.println("Screen Size: " + size);
        System.out.println("Price: " + price);
    }

    public static void main(String[] args) {
        MobilePhones mp1 = new MobilePhones();
        MobilePhones mp2 = new MobilePhones();
        MobilePhones mp3 = new MobilePhones();

        mp1.accept();
        mp2.accept();
        mp3.accept();

        mp1.display();
        mp2.display();
        mp3.display();

    }
}
