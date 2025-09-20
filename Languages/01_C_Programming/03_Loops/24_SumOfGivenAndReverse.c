// print the sum of the given number and its reverse number sum
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int temp = num;

    int rev = 0;

    while(temp > 0)
    {
        int rem= temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    printf("Reverse number :  %d\n", rev);
    printf("Sum of original + its reverse num: %d", num + rev);

    return 0;
}