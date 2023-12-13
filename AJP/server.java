import java.io.*;
import java.net.*;

public class server{
    public static void main(String[] args) throws IOException{
        System.out.println("Waiting for Client");
        ServerSocket sc = new ServerSocket(8900);
        Socket s = sc.accept();
        System.out.println("Connection Established");
    }
}