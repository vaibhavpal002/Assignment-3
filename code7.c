/*Write a program to check whether roots of a given quadratic equation are real & 
distinct, real & equal or imaginary root*/
#include<stdio.h>
#include<math.h>
int main()
{
 float x1,x2,a,b,c;
 printf("Enter the Values of a,b,c: ");
 printf("\n");
 scanf("%f%f%f",&a,&b,&c);
 printf("Required Quadratic Equation becomes:%.1fx^2+%.1fx+%.1fx\n",a,b,c);
 x1=-b+sqrt(b*b-4*a*c)/(2*a);
 x2= -b-sqrt(b*b-4*a*c)/(2*a);
 if(b*b-4*a*c==0&&x1==x2)
 {
    printf("Roots real and equal");
 }
 else if(b*b-4*a*c>0&&x1!=x2)
 {
    printf("Roots are real and distinct");
 }
 else if(b*b-4*a*c<0)
 {
    printf("Roots are imaginary");
 }
 return 0;
}