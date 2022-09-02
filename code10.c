/*Write a program which takes the cost price and selling price of a product from the 
user. Now calculate and print profit or loss percentage*/
#include<stdio.h>
int main()
{
    float sp,cp;
    printf("Enter the Cost price of the product :");
    scanf("%f",&cp);printf("\n");
    printf("Enter the Selling price of the product :");
    scanf("%f",&sp);printf("\n");
    if(cp>sp)
    {
       float loss= cp-sp;
       float losspercent =(loss/cp)*100;
       printf("Loss percentage ocuurs : %.2f",losspercent);
    }
    else if(cp<sp)
    {
        float profit=sp-cp;
        float profitpercent=(profit/cp)*100;
        printf("Profit percent occurs :  %.2f",profitpercent);
    }
    else if(sp=cp)
    {
        printf("Neither profit Nor Loss");
    }
    return 0;
}