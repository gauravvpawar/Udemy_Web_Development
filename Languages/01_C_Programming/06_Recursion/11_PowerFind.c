// to find the power of the  number
// by the logirathmic formulae

#include<stdio.h>
int findPower(int a,int b)
{
    int ans = 1;

    for(int i = 1;i<=b;i++)
    {
        ans = ans * a;
    }

    return ans;
}

// step2
int findPower2(int a,int b)
{
    if(b == 0)
    {
        return 1;
    }

    int x = findPower2(a  ,b/2);

    if(b % 2 == 0)
    {
        return x * x;
    }

    return x * x * a;
}

int main()
{
    int a,b;

    printf("Enter the base number : ");
    scanf("%d" , &a);
    printf("Enter the power number : ");
    scanf("%d" , &b);

    printf("Power find by brute force: %d \n" , findPower(a,b));
    printf("Power find by brute force: %d" , findPower2(a,b));
    return 0;   
}