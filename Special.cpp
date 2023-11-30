#include<iostream>
using namespace std;

class Demo      //Class Defination
{
    public:     //Access Specifier
        int i;      // Characteristics
        int j;       // Characteristics

        Demo()      //Default Constructor
        {
            cout<<"Inside default Constructor\n";
            i = 0;
            j = 0;
        }

        Demo(int A, int B)  //Parameterised Constructor
        {
            cout<<"Inside Parameterised Constructor\n";
            i = A;
            j = B;
            cout<<"I = "<<i<<"\n";
            cout<<"J = "<<j<<"\n";
        }

        Demo(Demo &ref)     //Copy Constructor
        {
            cout<<"Inside Copy Constructor\n";    
            i = ref.i;
            j = ref.j;
            cout<<"I = "<<ref.i<<"\n";
            cout<<"J = "<<ref.j<<"\n";
        }

        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);

    return 0;
}