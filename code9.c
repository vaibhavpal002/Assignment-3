/*Write a program to find the greatest among three given numbers. Print number once 
if the greatest number appears two or three times*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,result;
    printf("Enter three Number: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    result=num1>num2?num1>num2?num1:num2:num2>num3?num2:num3;
    printf("Greatest among three is:%d",result);
    return 0;
}