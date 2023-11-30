#include<stdio.h>

int main()
{
    int Arr[5] = {11,21,51,101,111};

    int *p = &(Arr[0]);   // int *p = &(Arr[0]);

    printf("%d\n",(*p));

    return 0;
}