/*
 * Write to create a class “Book” having data members ‘author’, ’title’,
 * ‘publisher’. Derive a class “BookInfo” having data members ‘price’, ‘stock
 * position’ and a method ‘show()’.Initialize and display information for 3
 * objects of “BookInfo”.
 */

import java.util.*;

class Book {
    Scanner sc = new Scanner(System.in);

    String author, title, publisher;

    void accept() {
        System.out.println("Enter author name, title of the book, and publisher info");
        author = sc.nextLine();
        title = sc.nextLine();
        publisher = sc.nextLine();
    }
}

class Bookinfo extends Book{
    int price, sPosition;

    void accept1() {
        System.out.println("Enter price of the book followed by the stock position: ");
        price = sc.nextInt();
        sPosition = sc.nextInt();
    }
    
    void show() {
        System.out.println("Author name: " + author);
        System.out.println("Title: " + title);
        System.out.println("Publisher: " + publisher);
        System.out.println("Price: " + price);
        System.out.println("Stock Position: " + sPosition);
    }
}

class BookInheritance {
    public static void main(String[] args) {
        Bookinfo bk = new Bookinfo();
        bk.accept();
        bk.accept1();
        bk.show();
    }
}