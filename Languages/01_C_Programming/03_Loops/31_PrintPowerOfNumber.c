// take the two number and print the power of it
#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter the a value : ");
    scanf("%d" ,&a);
    printf("Enter the b value : ");
    scanf("%d" , &b);

    int ans = 1;
    for(int i = 1;i<=b;i++)
    {
        ans = ans * a;
    }

    printf("Ans : %d" , ans);
    return 0;
}