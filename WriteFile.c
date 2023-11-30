#include<stdio.h>
#include<fcntl.h>   // For File Control
#include<unistd.h>  // For Universal standard
#include<string.h>

int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    Ret = write(fd,Arr,strlen(Arr)); //(KAshat lihaych, Kay lihaych, Kiti lihaych)

    printf("%d Bytes gets written in the file\n",Ret);

    close(fd);
    return 0;
}