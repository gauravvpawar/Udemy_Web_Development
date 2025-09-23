// take the two number input and find the  power of that number

#include<stdio.h>
int findpow(int a , int b)
{
    if(b == 0)
    {
        return 1;
    }

    return a * findpow(a , b-1);
}

int main()
{
    int a , b;
    printf("Enter the a value : ");
    scanf("%d" , &a);
    printf("Enter the b value : ");
    scanf("%d" , &b);

    int ans = findpow(a , b);
    printf("Power of %d to %d : %d" , a , b , ans);
    return 0;
}