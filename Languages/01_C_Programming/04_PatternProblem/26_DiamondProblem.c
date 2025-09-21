// diamond problem 
// it is valid for only odd number

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int m = (num/2) + 1;
    int nsp = num/2; // number of space
    int nos = 1; // number of star

    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=nsp;j++)
        {
            printf(" ");
        }

        for(int k = 1;k<=nos;k++)
        {
            printf("*");
        }

        if(i < m)
        {
            nsp--;
            nos += 2;
        }else{
            nsp++;
            nos -= 2;
        }

        printf("\n");
    }

    return 0;
}