import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class jdbc {
    public static void main(String[] args) throws ClassNotFoundException,SQLException {
        Class.forName("com.mysql.jdbc.driver");
        String url = "jdbc:mysql://localhost:3306/Spring";
        Connection con = DriverManager.getConnection(url);
        System.out.println("Connection Created");
        con.close();
        System.out.println("Connection Closed");
    }
}
