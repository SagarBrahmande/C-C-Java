#include<stdio.h>
#include<fcntl.h>   // For File Control
#include<unistd.h>  // For Universal standard

int main()
{
    int fd = 0;

    fd = creat("Marvellous.txt",0777);

    if(fd != -1)
    {
        printf("File is successfully created with FD : %d\n",fd);
    }

    return 0;
}