import Marvellous.Maths;
import Marvellous.Infosystems.Arithmatic;

class PackageDemo
{
    public static void main(String arg[])
    {
        Maths mobj = new Maths();
        
        Arithmatic aobj = new Arithmatic();

        int iRet = 0;
        iRet = mobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);

        iRet = aobj.Substraction(11,1);
        System.out.println("Substraction is : "+iRet);
    }
}