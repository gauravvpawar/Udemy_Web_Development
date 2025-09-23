// find  the  n  number of factorial of number

#include<stdio.h>
int fact(int num)
{
    int ans = 1;
    for(int i = 1;i<=num;i++)
    {
        ans = ans * i;
    }

    return ans;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int ans = fact(num);
    printf("Factorial : %d \n" , ans);
    return 0;
}