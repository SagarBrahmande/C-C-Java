#include<iostream>
using namespace std;

float Calaculate(float Marks, float OutOf = 100)
{
    float Percentage = (Marks / OutOf) * 100;
    return Percentage;
}

int main()
{
    float Ans = 0.0f;
    
    Ans = Calaculate(86,100);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calaculate(86);
    cout<<"Percentage : "<<Ans<<"\n";

    Ans = Calaculate(320,400);
    cout<<"Percentage : "<<Ans<<"\n";

    return 0;
}