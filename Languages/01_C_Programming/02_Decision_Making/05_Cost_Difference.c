// find the  selling price and the cost price difference
#include<stdio.h>
int main()
{
    int Selling_price , Cost_Price;
    printf("Enter the selling price : ");
    scanf("%d" , &Selling_price);
    printf("Enter the Cost price : ");
    scanf("%d" , &Cost_Price);

    if(Cost_Price > Selling_price)
    {
        printf("You are in loss");
    }else{
        printf("You are in profit");
    }

    printf("\nThank you !");
    return 0;
}