// Book class
class Book {
    // Data members
    String author;
    String title;
    String publisher;

    // Constructor
    Book(String author, String title, String publisher) {
        this.author = author;
        this.title = title;
        this.publisher = publisher;
    }
}

// BookInfo class derived from Book
class BookInfo extends Book {
    // Data members
    double price;
    int stockPosition;

    // Constructor
    BookInfo(String author, String title, String publisher, double price, int stockPosition) {
        super(author, title, publisher);
        this.price = price;
        this.stockPosition = stockPosition;
    }

    // Method to display information
    void show() {
        System.out.println("Title: " + title);
        System.out.println("Author: " + author);
        System.out.println("Publisher: " + publisher);
        System.out.println("Price: " + price);
        System.out.println("Stock position: " + stockPosition);
        System.out.println();
    }
}

// Main class
public class BookInfoExample {
    public static void main(String[] args) {
        // Initialize 3 objects of BookInfo
        BookInfo book1 = new BookInfo("John Doe", "The First Book", "Random House", 9.99, 50);
        BookInfo book2 = new BookInfo("Jane Smith", "The Second Book", "Penguin Books", 12.99, 20);
        BookInfo book3 = new BookInfo("Jack Black", "The Third Book", "HarperCollins", 7.99, 100);

        // Display information of all 3 objects
        book1.show();
        book2.show();
        book3.show();
    }
}
