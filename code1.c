//Write a program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
 int number;
 printf("Enter a number : ");
 scanf("%d",&number);
 if(number<=0)
 {
    printf("Non positive");
 }
 else
 {
    printf("Positive");
 }
 return 0;
 
}