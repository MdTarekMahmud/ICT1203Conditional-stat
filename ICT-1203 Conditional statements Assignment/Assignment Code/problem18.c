/*18. Write a C program to calculate profit and loss on a transaction.
Test Data :*/
#include<stdio.h>
int main()
{
    int selling_price,cost_price;
    top:
    printf("\n\nEnter your cost price & Selling price: ");
    scanf("%d %d",&cost_price,&selling_price);

    if(cost_price<selling_price)
    {
        printf("You can booked your profit amount : %d\n",selling_price-cost_price);

    }
    else if(cost_price>selling_price)
    {
        printf("You can get loss amount of : %d\n",cost_price-selling_price);
    }
    else
    {
        printf("No profit no loss.\n");
    }
    goto top;

    return 0;
}