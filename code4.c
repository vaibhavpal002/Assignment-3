/*Write a program to check whether a given number is an even number or an odd 
number without using % operator.*/
#include<stdio.h>
int main()
{
    int number,result;
    printf("Enter the Number : ");
    scanf("%d",&number);
    result=number&1;
    if(result==1)
    printf("Odd");
    else
    printf("Even");
    return 0;
}