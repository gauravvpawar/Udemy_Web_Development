// find the factorial of the number by using the recusion
#include<stdio.h>
int fact(int n)
{
    if(n == 1 || n == 0)
    {
        return 1;
    }

    return n * fact(n-1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int ans = fact(num);
    printf("%d", ans);
    return 0;
}