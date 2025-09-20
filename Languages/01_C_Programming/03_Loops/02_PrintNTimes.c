// take the n input from user and print the hello world till n times
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 1;i<=num;i++)
    {
        printf("Hello World\n");
    }
    return 0;
}