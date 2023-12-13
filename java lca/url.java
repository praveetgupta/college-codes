import java.io.*;
import java.net.*;

public class url{
    public static void main(String[] args) throws IOException{
        URL url = new URL("https://mitwpu.edu.in/school-of-polytechnic/");
        System.out.println("Protocol: "+url.getProtocol());
        System.out.println("Port: "+url.getPort());
        System.out.println("Host: "+url.getHost());
        System.out.println("File: "+url.getFile());
    }
}