// count the number of digit
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the  number : ");
    scanf("%d" , &num);

    int count = 0;
    while(num > 0)
    {
        count++;
        num /= 10;
    }

    printf("Count the digit : %d", count);
    return 0;
}