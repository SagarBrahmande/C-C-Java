class Multi3
{
    public static void main(String arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
        
        Demo obj1 = new Demo(); //New state

        obj1.start();   // Runnable state

        System.out.println("Thread goes to dead state");
    }
}

class Demo extends Thread
{
    public void run()   //Running state
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());
    }
}