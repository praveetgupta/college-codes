import java.util.Scanner;

public class Main1 {

    public static class Book {
        String author;
        String title;
        String publisher;
    }

    public static class BookInfo extends Book {
        int price;
        int stock_position;

        public void show() {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter Book Author: ");
            author = sc.nextLine();

            System.out.println("Enter Book Title: ");
            title = sc.nextLine();

            System.out.println("Enter Book Publisher: ");
            publisher = sc.nextLine();

            System.out.println("Enter Book Price: ");
            price = sc.nextInt();

            System.out.println("Enter Stock Position: ");
            stock_position = sc.nextInt();

            System.out.println("Author is: " + author);
            System.out.println("Title is: " + title);
            System.out.println("Publisher is: " + publisher);
            System.out.println("Price is: " + price);
            System.out.println("Stock Position is: " + stock_position);
        }
    }

    public static void main(String[] args) {
        BookInfo obj1 = new BookInfo();
        obj1.show();

        BookInfo obj2 = new BookInfo();

        obj2.show();

        BookInfo obj3 = new BookInfo();
        obj3.show();
    }
}
