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

class Marvellous : public Hello
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside constructor of Marvellous \n";
            p = 60;
        }
        ~Marvellous()
        {
            cout<<"Inside destructor of Marvellous \n";
            p = 60;
        }
        void Sun()
        {
            cout<<"Inside Sun of Marvellous \n";
        }
};

int main()
{
    Marvellous mobj;

    cout<<sizeof(mobj)<<" Bytes \n";

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.c<<"\n";
    cout<<mobj.p<<"\n";

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();
    
    return 0;
}