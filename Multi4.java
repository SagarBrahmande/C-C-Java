
class Multi4 
{
    public static void main(String arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo(); // New State
        obj1.start();   //Runnable state
        System.out.println("End of main thread");
    }

}

class Demo extends Thread
{
    public void run()
    {
        for(int i = 1; i < 1000; i++)
        {}
        System.out.println("End of thread");
    }
}