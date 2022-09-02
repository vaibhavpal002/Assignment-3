//Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char alphabet;
    printf("Enter the alphabet : ");
    scanf("%c",&alphabet);
    if(alphabet>=65&&alphabet<=90)
    printf("Uppercase");
    else if(alphabet>=97&&alphabet<=122)
    printf("Lowercase");
    return 0;
}