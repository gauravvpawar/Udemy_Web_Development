// take 4 positive integer number and print the largest  one
#include<stdio.h>
int main()
{
    int num1, num2 , num3 , num4;
    printf("Enter the first number : ");
    scanf("%d" ,&num1);

    printf("Enter the second number : ");
    scanf("%d" ,&num2);

    printf("Enter the third number : ");
    scanf("%d" ,&num3);

    printf("Enter the fourth number : ");
    scanf("%d" ,&num4);

    if(num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("First number is greater one");
    }else if(num2 > num1 && num2 > num3 && num2 > num4)
    {
        printf("Second number is greater one");
    }else if(num3 > num1 && num3 > num2 && num3 >num4)
    {
        printf("Third number is greater one");
    }else{
        printf("Fourth number is greater");
    }
    return 0;
}