import java.util.*;
class Hierarchal
{
    public static void main(String arg[])
    {
        Derived dobj1 = new Derived();
        DerivedX dobj2 = new DerivedX();
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

class DerivedX extends Base
{
    int P,Q;
    public DerivedX()
    {
        System.out.println("DerivedX Constructor");
    }
}