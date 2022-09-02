/*. Write a program which takes the length of the sides of a triangle as an input. Display 
whether the triangle is valid or not.*/
#include<stdio.h>
int main()
{
    int side1,side2,side3;
    printf("Enter the side1: ");
    scanf("%d",&side1);
    printf("Enter the side2: ");
    scanf("%d",&side2);
    printf("Enter the side3: ");
    scanf("%d",&side3);
    if(side1+side2>side3&&side2+side3>side1&&side3+side1>side2)
    printf("Triangle is Valid");
    else
    printf("Triangle is not valid");
    return 0;
}