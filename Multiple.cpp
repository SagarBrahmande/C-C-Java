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

class Hello 
{
    public:
        int a,b;
        Hello()
        {
            cout<<"Inside Hello constructor\n";
            a = 30;
            b = 40;
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

//class Marvellous : public Demo, public Hello
class Marvellous : public Hello, public Demo
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

    mobj.Fun();
    mobj.Gun();
    mobj.Sun();
    
    return 0;
}