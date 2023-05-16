import java.util.*;

class shape {
    void display() {
        System.out.println("This is shape class.");
    }
}

class rectangle extends shape {
    void area_rectangle(int l, int b) {
        System.out.println("The area of rectangle is: " + (2 * (l + b)));
    }
}

class cube extends rectangle {
    void area_cube(int s) {
        System.out.println("The area of cube is: " + (s * s));
    }
}

class multi_level {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        cube obj = new cube();
        obj.display();
        System.out.println("Enter length and breadth: ");
        int l = sc.nextInt();
        int b = sc.nextInt();
        obj.area_rectangle(l, b);
        System.out.println("Enter side: ");
        int s = sc.nextInt();
        obj.area_cube(s);
        sc.close();
    }
}
