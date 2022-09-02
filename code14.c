/*write a program to check whether a given number is divisible by 7 or divisible by 3 */
#include<stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number%7==0&&number%3==0)
    printf("No. is divisble by both 7 and 3");
    else
    {
        if(number%7==0)
    printf("No. is divisible by 7");
    else if(number%3==0)
    printf("No. is  divisible by 3");
    }
    return 0;
}