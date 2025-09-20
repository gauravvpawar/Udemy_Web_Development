// write a program to print the sum of all even number of digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    int EvenSum= 0;
    while(num > 0)
    {
        int rem = num % 10;
        
        if(rem % 2 ==0)
        {
            EvenSum += rem;
        }
        num /= 10;
    }

    printf("Even number sum : %d", EvenSum);
    return 0;
}