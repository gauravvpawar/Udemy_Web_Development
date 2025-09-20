// print the sum of series
// 1 - 2 + 3 - 4 + 5 - 6
// -1 + -1 + -1 => -3


#include<stdio.h>
int main()
{
    int digit;
    printf("Enter the count of digit : ");
    scanf("%d" ,&digit);

    int sum = 0;
    for(int i = 1;i<=digit;i++)
    {
        if(i % 2 == 0 )
        {
            sum = sum - i;
        }
        else{
            sum = sum + i;
        }
    }

    printf("Sum of series digit : %d" , sum);
    return 0;
}