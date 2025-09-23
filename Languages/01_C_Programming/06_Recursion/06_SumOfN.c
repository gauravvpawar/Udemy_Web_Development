// print the sum of n 

#include<stdio.h>
int findSum(int n)
{
    if(n == 1)
    {
        return 1; 
    }

    return n + findSum(n-1);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int sum = findSum(num);
    printf("Sum : %d" , sum);
    return 0;
}