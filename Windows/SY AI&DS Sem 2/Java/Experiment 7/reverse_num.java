class multi extends Thread {
    public void run() {
        for (int i = 1; i <= 10; i++) {
            System.out.println("From forward thread:" + i);
        }
    }
}

class multi_reverse extends Thread {
    public void run() {
        for (int i = 10; i >= 1; i--) {
            System.out.println("From reverse thread:" + i);
        }
    }
}

public class reverse_num {
    public static void main(String args[]) {
        multi m1 = new multi();
        multi_reverse m2 = new multi_reverse();
        m1.start();
        m2.start();
    }
}
