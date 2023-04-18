import java.util.*;

public class Main2 {
    public static class Book {
        String author;
        String title;
        String publisher;
    }

    public static class BookInfo extends Book {
        int price;
        int stock_position;
    }

    public static class BookSales extends BookInfo {

        int number_of_copies_sold;

        public void RevenueGenerated() {
            int revenue = number_of_copies_sold * price;
            System.out.println("Revenue is: " + revenue);
        }

        public void AllShow() {
            System.out.println("Enter Book Author, Title, Publisher, Price, Stock Position, Number of Copies Sold");
            Scanner sc = new Scanner(System.in);
            author = sc.nextLine();
            title = sc.nextLine();
            publisher = sc.nextLine();
            price = sc.nextInt();
            stock_position = sc.nextInt();
            number_of_copies_sold = sc.nextInt();

            System.out.println("Author is: " + author);
            System.out.println("Title is: " + title);
            System.out.println("Publisher is: " + publisher);
            System.out.println("Price is: " + price);
            System.out.println("Stock Position is: " + stock_position);
            System.out.println("Number of copies sold is: " + number_of_copies_sold);

            RevenueGenerated();
        }
    }

    public static void main(String[] args) {
        BookSales obj = new BookSales();
        obj.AllShow();
    }
}
