//Write a program to check whether a given number is a three-digit number or no
#include<stdio.h>
int main()
{
    int number;
    printf("Enter the \"Number\" :");
    scanf("%d",&number);
    
    if(number>99&&number<1000)
    {
        printf("Number is three digit no.");
    }
    else
    printf("Not a three digit number");
    return 0;
}