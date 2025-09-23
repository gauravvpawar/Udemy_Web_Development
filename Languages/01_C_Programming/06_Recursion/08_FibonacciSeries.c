// to find the fibonacci series
// series in
// 1 1 2 3 5 8 13
// 1 2 3 4 5 6 7

#include<stdio.h>
int fib(int n)
{
    if(n <= 2)
    {
        return 1;
    }

    return fib(n-1) + fib(n-2);
}

int main()
{
    int num;
    printf("Enter the number:  ");
    scanf("%d" , &num);

    printf("Fibonacci series : %d" , fib(num));
    return 0;
}