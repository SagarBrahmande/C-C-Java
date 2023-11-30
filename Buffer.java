import java.io.*;

class Buffer
{
    public static void main(String arg[])

    try{   
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.println("Enter First Number : ");
        int No1 = Integer.parseInt(br.readLine());

        System.out.println("Enter second Number : ");
        int No2 = Integer.parseInt(br.readLine());

        int Ans = No1 + No2;
        System.out.println("Addition is : "+Ans);
    }
    }
    catch(Exception obj)
    {}
}