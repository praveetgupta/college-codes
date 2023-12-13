import java.net.*;
public class url {
    public static void main(String[] args) throws Exception{
            URL url=new URL("https://mitwpu.edu.in/school-of-polytechnic/");
            System.out.println("Host name: "+url.getHost());
            System.out.println("Port Number: "+url.getPort());
            System.out.println("Protocol: "+url.getProtocol());
            System.out.println("File Name: "+url.getFile());
            System.out.println("Authority: "+url.getAuthority());
        }
    }


