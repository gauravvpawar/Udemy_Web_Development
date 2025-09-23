// find the hcf of number

#include<stdio.h>
int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }

    return b;
}
int gcd(int a , int b)
{
    int hcf = 1;

    for(int i = min(a , b);i>=1;i--)
    {
        if(a% i == 0 && b % i == 0)
        {
            hcf = i;
            break;
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