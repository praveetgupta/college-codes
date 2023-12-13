import java.io.*;
import java.net.*;

public class client{
    public static void main(String[] args) throws IOException{
        System.out.println("Client Started");
        Socket s = new Socket("localhost",8900);
    }
}