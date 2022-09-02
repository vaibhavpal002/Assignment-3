//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{
 int number,n;
 printf("Enter the Number : ");
 scanf("%d",&number);
 n=number%10;
 if(n==0||n==5)
 printf("Number is divisible by 5");
 else
 printf("Number is not divisible by 5");
 return 0;
}