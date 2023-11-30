#include<stdio.h>
#include<fcntl.h>   // For File Control
#include<unistd.h>  // For Universal standard
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = read(fd,Arr,10); //(kashatun vachaych,kashatun vachaych, Kiti lihaych)

    printf("%d Bytes gets read from the file\n",Ret);
    printf("Data is : %s\n",Arr);

    close(fd);
    return 0;
}