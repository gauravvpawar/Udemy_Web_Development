// check the given number is  absolute or not if it is not the print the absolute value
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    if(num < 0)
    {
        num = num * -1;
    }

    printf("Number : %d" , num);
    return 0;
}