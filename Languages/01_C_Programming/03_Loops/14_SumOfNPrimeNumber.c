// find 5 prime number sum
// 2 ,3 ,5 , 7 , 11 ->28

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    int count = 0;
    int sum = 0;

    for(int num = 2;count<n;num++)
    {
        int isPrime = 1;
        for(int i = 2;i<= num/2;i++)
        {
            if(num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if(isPrime)
        {
            sum += num;
            count++;
        }
    }

    printf("Sum of n prime : %d" , sum);

    return 0;
}
