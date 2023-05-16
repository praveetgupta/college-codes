class Even extends Thread {
    public void run() {
        for (int i = 0; i <= 10; i++) {
            if (i % 2 == 0) {
                System.out.println("Even: " + i);
            }
        }
    }
}

class Odd extends Thread {
    public void run() {
        for (int i = 0; i <= 10; i++) {
            if (i % 2 != 0) {
                System.out.println("Odd " + i);
            }
        }
    }
}

class odd_even_thread {
    public static void main(String[] args) {
        Even e1 = new Even();
        Odd o1 = new Odd();
        e1.start();
        o1.start();
    }
}
