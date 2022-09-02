/*Write a program to check whether a given character is an alphabet (uppercase), an 
alphabet (lower case), a digit or a special character.
*/
#include<stdio.h>
int main()
{
    char m;
    printf("Enter a Character: ");
    scanf("%c",&m);
    if (m>=65&&m<=90)
    {
        printf("Character is in Uppercase");
    }
    else if(m>=97&&m<=122)
    {
        printf("Character is in Lowercase");
    }
    else if(m>=48&&m<=57)
    {
        printf("Character is a Digit");
    }
    else
    {
        printf("Character is a special character");
    }
    return 0;
    
}