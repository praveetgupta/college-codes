import java.util.*;

class Shape{
    float length, breadth;

    void accept(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length and breadth: ");
        length = sc.nextFloat();
        breadth = sc.nextFloat();
        sc.close();
    }

    void display(){
        System.out.println("Length: " + length);
        System.out.println("Breadth: " + breadth);
    }
}

class Rectangle extends Shape{
    float area;

    void cal_area(){
        area = length * breadth;
    }

    void display(){
        System.out.println("Area: " + area);
    }
}

class Cube extends Rectangle{
    float volume, width;
    Scanner sc = new Scanner(System.in);

    void accept(){
        super.accept();
        System.out.println("Enter width: ");
        width = sc.nextFloat();
    }

    void cal_volume(){
        volume = width * length * breadth;
    }

    void display(){
        super.display();
        System.out.println("Volume: " + volume);
    }
}

public class MultipleInheritance{
    public static void main(String[] args){
        Cube c1 = new Cube();
        c1.accept();
        c1.cal_area();
        c1.cal_volume();
        c1.display();
    }
}
