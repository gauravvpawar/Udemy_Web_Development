// pascal triangle

#include<stdio.h>
int fact(int n)
{
    int ans = 1;
    for(int i = 2;i<=n;i++)
    {
        ans = ans * i;
    }

    return ans;
}

int combination(int n , int r)
{
    int ans = fact(n) / (fact(r) * fact(n-r));
    return ans;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(int i = 0;i<=n;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            int ans = combination(i, j);
            printf("%d " , ans);
        }

        printf("\n");
    }
    return 0;
}