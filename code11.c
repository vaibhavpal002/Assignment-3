/* Write a program to take marks of 5 subjects from the user. Assume marks are given 
out of 100 and passing marks is 33. Now display whether the candidate passed the 
examination or failed.
*/
#include<stdio.h>
int main()
{
    float hindi,physics,chemistry,mathematics,computer,marks;
    printf("Enter the marks of hindi : ");
    scanf("%f",&hindi);
    printf("Enter the marks of physics : ");
    scanf("%f",&physics);
    printf("Enter the marks of chemistry : ");
    scanf("%f",&chemistry);
    printf("Enter the marks of mathematics : ");
    scanf("%f",&mathematics);
    printf("Enter the marks of computer : ");
    scanf("%f",&computer);
    if(hindi>=33&&physics>=33&&chemistry>=33&&mathematics>=33&&computer>=33)
    {
      printf("Passed the examination");
    }
    else
    {
        printf("Failed the examination");
    }
    return 0;
}