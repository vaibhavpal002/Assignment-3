
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4==0&&year%100!=0||year%400==0)
    {
        printf("year is leap year");
    }
    else
    printf("Casual year");
    return 0;
}