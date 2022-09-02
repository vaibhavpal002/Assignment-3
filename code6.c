/*Write a program to print greater between two numbers. Print one number of both are 
the same.*/
#include<stdio.h>
int main()
{
    int num1,num2,result;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);
    result=num1>num2?num1:num2;
    printf("%d",result);
    return 0;
}