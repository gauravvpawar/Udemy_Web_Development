// print the n number of armstrong number 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" , &n);

    for(int i = 1;i<=n;i++)
    {
        // for digit count
        int temp = i;
        int countDigit  = 0;
        while(temp > 0)
        {
            countDigit++;
            temp /= 10;
        }

        // for to find the remainder and each square of it
        int sumOfDigit = 1;
        int temp_again = i;
        while(temp_again > 0)
        {
            int rem = temp_again % 10;
            int ans = 1;
            for(int j = 1;j<=countDigit;j++)
            {
                ans = ans * rem;
            }

            sumOfDigit += ans;
        
            temp_again /= 10;
        }

        if(i == sumOfDigit)
        {
            printf("%d is armstrong number \n" , i);
        }else{
            printf("%d is not a armstrong number \n", i);
        }
    }

    return 0;
}