#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;
        void Fun() //Defination
        {
            cout<<"Inside Base Fun\n";
        }      
        void Sun() //Defination
        {
            cout<<"Inside Base Sun \n";
        }
        void Gun()
        {
            cout<<"Inside Base Gun \n";
        }
        void Run()
        {
            cout<<"Inside Base Run \n";
        }
};

class Derived : public Base
{
    public:
        int a,b;
        void Gun()
        {
            cout<<"Inside Derived Gun\n";
        }
        void Run()
        {
            cout<<"Inside Derived Run \n";
        }
};

int main()
{
    Base *bp = new Derived;
    bp->Fun();
    bp->Gun();
    bp->Sun();
    bp->Run();

    return 0; 
}