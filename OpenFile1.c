#include<stdio.h>
#include<fcntl.h>   // For File Control
#include<unistd.h>  // For Universal standard

int main()
{
    int fd = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd != -1)
    {
        printf("File is successfully opend with FD : %d\n",fd);
    }

    close(fd);
    return 0;
}