import java.util.*;

class Overriding
{
    public static void main(String arg[])
    {
        Base bobj = new Derived();  //Up
        //Base bobj = new Base();   //No
        //Derived dobj = new Derived(); //No
        //Derived dobj = new Base();    //Down
        bobj.fun(); //Derived fun
        bobj.gun(); //Base gun
        bobj.sun(); //Derived sun
        bobj.run(); // Base run
    //    bobj.run(11);
        //bobj.mun();
    }
}
class Base
{
    public void fun() //1000
    {
    System.out.println("Inside Base fun");
    }
    public void gun() //2000
    {
    System.out.println("Inside Base gun");
    }
    public void sun() //3000
    {
    System.out.println("Inside Base sun");
    }
    public void run() //4000
    {
    System.out.println("Inside Base run");
    }
}

class Derived extends Base
{
    public void fun() //5000
    {
        System.out.println("Inside derived fun");
    }
    public void sun() //6000
    {
        System.out.println("Inside derived sun");
    }
    public void run(int A) //7000
    {
        System.out.println("Inside derived run");
    }
    public void mun() //8000
    {
        System.out.println("Inside derived mun");
    }
}