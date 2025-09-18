// take three positive number and print the which one is greater one
#include<stdio.h>
int main()
{
    int num1, num2 , num3;
    printf("Enter the first number : ");
    scanf("%d", &num1);

    printf("Enter the second number : ");
    scanf("%d", &num2);

    printf("Enter the third number : ");
    scanf("%d", &num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("Num 1 is greater one");
        }else{
            printf("Num 3 is greater one");
        }
    }else{
        if(num2 > num3)
        {
            printf("Num 2 is greater one");
        }else{
            printf("Num 3 is greater one");
        }
    }
    return 0;
}