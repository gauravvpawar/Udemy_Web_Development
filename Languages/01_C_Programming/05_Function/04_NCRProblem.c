// find the ncr(permutation and combination value)
// (n! / r!*(n - r)!)

#include<stdio.h>
int factorial(int n)
{
    int fact = 1;
    for(int i = 2;i<=n;i++)
    {
        fact = fact * i;
    }

    return fact;
}
int main()
{
    int n , r;
    printf("Enter the number n : ");
    scanf("%d" ,&n);
    printf("Enter the r value : ");
    scanf("%d" , &r);

    int nfact = factorial(n);
    int rfact = factorial(r);
    int nrfact = factorial(n - r);

    int ans = nfact / (rfact * nrfact);

    printf("ncr : %d" ,ans);
    return 0;
}