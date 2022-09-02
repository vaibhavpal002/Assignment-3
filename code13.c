//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    if(num%6==0)
    {
        printf("Number is divisible by 3 and 2 both");
    }
    else
    printf("Number is not divisible by 3 and 2 both");
    return 0;
}