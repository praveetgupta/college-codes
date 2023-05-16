import java.util.*;

class Book {
    Scanner sc = new Scanner(System.in);
    String name, author;

    public void accept() {
        System.out.println("Enter name of the book: ");
        name = sc.nextLine();
        System.out.println("Enter name of author: ");
        author = sc.nextLine();
    }
}

class Bookinfo extends Book {
    String publisher;
    int book_id, pages;

    void accept1() {
        System.out.println("Enter name of publisher: ");
        publisher = sc.nextLine();
        System.out.println("Enter book id: ");
        book_id = sc.nextInt();
        System.out.println("Enter number of pages: ");
        pages = sc.nextInt();
    }

    void display() {
        System.out.println("Book name:" + name);
        System.out.println("Number of pages:" + pages);
        System.out.println("Author:" + author);
        System.out.println("Publisher:" + publisher);
        System.out.println("Book ID:" + book_id);
    }
}

class single_level {
    public static void main(String[] args) {
        Bookinfo obj = new Bookinfo();
        obj.accept();
        obj.accept1();
        obj.display();
    }
}