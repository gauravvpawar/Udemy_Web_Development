// print the  number is armstrong number or not
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int temp = num;
    int sum = 0;
    while(temp > 0)
    {
        sum++;
        temp /= 10;
    }

    printf("Sum  : %d\n" , sum);

    int SumOfAns = 0;
    
    int temp2 = num;
    
    while(temp2 > 0)
    {
        int rem = temp2 % 10;
        int ans = 1;
        for(int i = 1;i<=sum;i++)
        {
            ans = ans * rem;
        }

        printf("Ans : %d\n", ans); 
        
        SumOfAns += ans;

        temp2 /= 10;
    }
    
    printf("Sum  of ans : %d\n" , SumOfAns);
    if(num == SumOfAns)
    {
        printf("Given number is armstrong number");
    }else{
        printf("Given number is not armstrong number");
    }
    return 0;
}
