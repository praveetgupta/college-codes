import java.util.Scanner;

class Book {
    String title, author;
    int pages;

    void accept() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter book title, author name, and pages:");
        title = sc.nextLine();
        author = sc.nextLine();
        pages = sc.nextInt();
        sc.close();
    }

    void display() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Pages: " + pages);
    }
}

class BookInfo extends Book {
    int price, stockPosition;

    void acceptInfo() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter price and stock position:");
        price = sc.nextInt();
        stockPosition = sc.nextInt();
        sc.close();
    }

    void displayInfo() {
        System.out.println("Price: " + price);
        System.out.println("Stock Position: " + stockPosition);
    }
}

public class Inheritance {
    public static void main(String[] args) {
        BookInfo b1 = new BookInfo();
        b1.accept();
        b1.acceptInfo();
        b1.display();
        b1.displayInfo();
    }
}