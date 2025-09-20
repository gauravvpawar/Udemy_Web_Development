// write a program to print the reverse of the  given number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Original number : %d\n",num);
    int rev = 0;
    int temp = num;

    while(temp > 0)
    {
        int rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    printf("Reverse number: %d" , rev);
    return 0;
}