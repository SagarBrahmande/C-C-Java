#include<stdio.h>
main()
{
    int a,b = 2, c=5;
    a=(b,++c,b+c);
    printf("%d",a);

    return 0;
}