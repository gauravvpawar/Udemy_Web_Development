// sum of digit of given number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" ,&num);
    int sum = 0;
    while(num > 0)
    {
        int rem = num% 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of digit : %d" , sum);
    return 0;
}