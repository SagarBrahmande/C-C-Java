#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int Arr[5];

    int *ptr1 = (int *) malloc(5 * sizeof(int)); // C
    
    int *ptr2 = new int Arr[5];                  //C++

    free (ptr1);        // C
    
    delete ptr2[];     //C++


    return 0;
}