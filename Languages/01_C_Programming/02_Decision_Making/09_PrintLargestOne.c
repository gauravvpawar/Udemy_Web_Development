// take three positive number and print the weather which number is greater one
#include<stdio.h>
int main()
{
    int a, b , c;
    printf("Enter the first number : ");
    scanf("%d" ,&a);
    printf("Enter the second number :");
    scanf("%d" , &b);
    printf("Enter the third number : ");
    scanf("%d" , &c);

    if(a > b && a > c)
    {
        printf("first is greater one");
    }else if(b > a && b > c)
    {
        printf("Second number is greater one");
    }else{
        printf("Third number is greater one");
    }
    return 0;
}