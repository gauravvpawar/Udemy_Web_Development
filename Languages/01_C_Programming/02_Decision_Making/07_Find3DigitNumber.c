// check the given number is positive if it is then the number is rely on three digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    if(num > 0)
    {
        if(num > 99 && num < 1000)
        {
            printf("Number is relay in three digit");
        }else{
            printf("Number does not relay in three digit");
        }
    }else{
        printf("Number is not positive");
    }
    return 0;
}