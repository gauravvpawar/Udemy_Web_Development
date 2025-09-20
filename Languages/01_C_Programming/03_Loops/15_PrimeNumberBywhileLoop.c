// print the sum of n prime number
#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num)
{
    if(num == 0 || num ==1) return false;
        for(int i = 2;i<=num/2;i++)
        {
            if(num % i == 0)
            {
                return false;
            }
        }
        return true;

}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    int num = 2, sum = 0;
    int count = 0;
    while(count < n)
    {
        if(isPrime(num))
        {
            // printf("%d \n" , num);
            sum += num;
            // printf("%d \n" , sum);
            count++;
        }
        num++;
    }

    printf("Sum of n prime : %d" , sum);

    return 0;
}