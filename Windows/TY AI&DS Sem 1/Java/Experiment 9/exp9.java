import java.net.*;

public class exp9 {
    public static void main(String[] args) throws UnknownHostException {
        InetAddress Address = InetAddress.getLocalHost();
        System.out.println(Address);
        Address = InetAddress.getByName("www.google.com");
        System.out.println(Address);
        InetAddress SW[] = InetAddress.getAllByName("www.youtube.com");
        for (int i = 0; i < SW.length; i++)
            System.out.println(SW[i]);
    }
}
