class Circle {
    double pi = 3.14;
    double radius;

    void display() {
        System.out.println("Radius: " + radius);
        System.out.println("Pi: " + pi);
    }

    double area() {
        return pi * radius * radius;
    }
}

public class CircleCCA {
    public static void main(String[] args) {
        Circle circle = new Circle();
        circle.radius = 5.0;
        circle.display();
        System.out.println("Area: " + circle.area());
    }
}
