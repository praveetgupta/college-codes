import java.io.*;
import java.net.*;

public class inet{
    public static void main(String[] args) throws UnknownHostException{
        InetAddress address = InetAddress.getLocalHost();
        System.out.println(address);
        address = InetAddress.getByName("www.google.com");
        System.out.println(address);
        InetAddress SW[] = InetAddress.getAllByName("praveetgupta.com");
        for(int i=0; i<SW.length; i++){
            System.out.println(SW[i]);
        }
    }
}