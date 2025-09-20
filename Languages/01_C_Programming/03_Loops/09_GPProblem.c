// Geometric Progression question
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    int a = 1;
    for(int i = 1;i<=num;i++)
    {
        printf("%d ", a);
        a = a * 2;
    }
    return 0;
}