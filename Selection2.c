#include<stdio.h>

int main()
{
    int Standard = 0;

    printf("Primary School Portal \n");

    printf("Enter your Standard \n");
    scanf("%d",&Standard);
    // If else if Ladder
    if(Standard == 1)
    {
        printf("Your Exam is at 1 PM");
    }
    else if (Standard == 2)
    {
        printf("Your Exam is at 2 PM");
    }
    else if(Standard == 3)
    {
        printf("Your Exam is at 3 PM");
    }
    else if(Standard == 4)
    {
        printf("Your Exam is at 4 PM");
    }
    else 
    {
        printf("Invalid Standard \n");
    }
    return 0;
}