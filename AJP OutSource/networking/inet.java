import java.net.*;

class aditya {
    public static void main(String[] args) throws Exception {
        InetAddress address = InetAddress.getLocalHost();
        System.out.println(address);
        address = InetAddress.getByName("www.google.com");
        System.out.println(address);
        InetAddress all[] = InetAddress.getAllByName("www.nba.com");
        for (int i = 0; i < all.length; i++) {
            System.out.println(all[i]);
        }
    }
}
