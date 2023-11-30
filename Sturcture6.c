/*#include<stdio.h>

struct Demo
{
    int i;
    float f;
    struct Hello
    {
        int no;
        float d;
    }hobj;
}dobj;

int main()
{
    dobj.i = 11;
    dobj.f = 90.99;

    dobj.hobj.no = 21;
    dobj.hobj.d = 90.88;

    return 0;
}*/

#include<stdio.h>

int main()
{
    float arr[4] = {98.3,4.3,51.6,7.6};
    int i = 0;

    int no =2;

    printf("%f\n",arr[i]);
    i++;

printf("%f\n",arr[i]);
    i++;

printf("%f\n",arr[i]);
    i++;

printf("%d\n",arr+1);
printf("%d\n",(&arr)+1);
printf("%d\n",2[arr]);
printf("%d\n",arr[3-1]);
printf("%d\n",arr[no]);
printf("%d\n",arr);

return 0;

}