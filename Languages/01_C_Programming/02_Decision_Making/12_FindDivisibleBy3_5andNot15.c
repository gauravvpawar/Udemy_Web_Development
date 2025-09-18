// find the number who can divisible by 3 or 5 but not divisible by 15
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d" ,&num);

    if(num % 3 == 0 || num% 5== 0)
    {
        if(num % 15 != 0)
        {
            printf("Number is divisible by 3 or 5 but not 15");
        }else{
            printf("Number is divisible by 3 or 5 but it divide  by 15");
        }
    }else{
        printf("Number is not divisible by 3 or 5");
    }
    return 0;
}