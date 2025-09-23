// print the number from n to 1
#include<stdio.h>
void printNumber(int n)
{
    if(n == 0)
    {
        return;
    }

    printf("%d " , n);
    printNumber(n-1);
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    printNumber(num);
    return 0;
}