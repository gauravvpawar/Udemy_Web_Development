// to solve the hcf problem
// hcf is highest common divisor
/*
like  12 -> 1 , 2 , 3 ,4, 6 , 12
      60 -> 1, 2 , 3, 4 , 5 , 6 , 10 , 12, 15

      hcf = 12;
*/

#include<stdio.h>
int min(int a , int b)
{
    if(a < b)
    {
        return a;
    }

    return b;
}
int gcd(int a, int b)
{
    int hcf = 1;

    for(int i = 1;i<=min(a , b);i++)
    {
        if(a % i == 0 && b% i == 0)
        {
            hcf = i;
        }
    }

    return hcf;
}
int main()
{
    int a , b;
    printf("Enter the first number : ");
    scanf("%d" , &a);
    printf("Enter the second number : ");
    scanf("%d" ,&b);

    int  hcf = gcd(a , b);

    printf("Hcf : %d  of (%d , %d) ", hcf , a , b);
}