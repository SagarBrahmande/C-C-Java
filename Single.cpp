#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Demo constructor\n";
            x = 10;
            y = 20;
        }
        ~Demo()
        {
            cout<<"Inside Demo destructor\n";
        }
        void Fun()
        {
            cout<<"Inside Fun of Demo\n";
        }
};

class Hello : public Demo
{
    public:
        int a,b,c;
        Hello()
        {
            cout<<"Inside Hello constructor\n";
            a = 30;
            b = 40;
            c = 50;
        }
        ~Hello()
        {
            cout<<"Inside Hello destructor\n";
        }
        void Gun()
        {
            cout<<"Inside Gun of Hello\n";
        }
};

int main()
{
    Hello hobj;

    cout<<sizeof(hobj)<<" Bytes \n";

    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";

    hobj.Fun();
    hobj.Gun();
    
    return 0;
}