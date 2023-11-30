import java.sql.*;

class Database
{
    public static void main(String arg[]) throws Exception
    {
        String URL = "jdbc:mysql://localhost:3306/PPA";
        String Username = "root";
        String Password = "Sagar@4470";
        String Query = "select * from student";

        Class.forName("com.mysql.cj.jdbc.Driver");

        Connection cobj = DriverManager.getConnection(URL,Username,Password);

        Statement sobj = cobj.createStatement();

        ResultSet robj = sobj.executeQuery(Query);

        while(robj.next())
        {
            System.out.println("RNO : "+robj.getInt("rno"));
            System.out.println("Name : "+robj.getString("name"));
            System.out.println("Address : "+robj.getString("Address"));
            System.out.println("Marks : "+robj.getInt("Marks"));
        }
    }
}