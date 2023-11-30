#include<stdio.h>
#include<fcntl.h>   // For File Control
#include<unistd.h>  // For Universal standard
#include<string.h>

int main()
{
    unlink("Marvellous.txt");

    printf("File deleted Succefully...");

    return 0;
}