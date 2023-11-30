import java.util.*;
class Multilevel
{
    public static void main(String arg[])
    {
        DerivedX dobj = new DerivedX();
        dobj.gun();
        dobj.fun();
    }
}

class Base
{
    public int A,B;
    public Base()
    {
        System.out.println("Base Constructor");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }
}

class Derived extends Base
{
    public int X,Y;
    public Derived()
    {
        System.out.println("Derived Constructor");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}

class DerivedX extends Derived
{
    int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX Constructor");
    }
}