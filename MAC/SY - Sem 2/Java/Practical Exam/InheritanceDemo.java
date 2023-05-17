class Shape {
    public void display() {
        System.out.println("This is a shape.");
    }
}

class Rectangle extends Shape {
    public void display() {
        System.out.println("This is a rectangle.");
    }
}

class Cube extends Rectangle {
    public void display() {
        System.out.println("This is a cube.");
    }
}

public class InheritanceDemo {
    public static void main(String[] args) {
        // Create a new Cube object
        Cube cube = new Cube();

        // Call the display method on the Cube object
        cube.display();
    }
}
