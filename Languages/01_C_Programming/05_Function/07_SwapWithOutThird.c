// swap the number but without using the third variable
#include<stdio.h>
int main()
{
    int a , b;
    printf("Enter the a number : ");
    scanf("%d" ,&a);
    printf("Enter the b number : ");
    scanf("%d" , &b);

    printf("Before swapping : \n");
    printf("a : %d \n",a);
    printf("b : %d \n",b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping : \n");
    printf("a : %d \n",a);
    printf("b : %d \n",b);
    return 0;
}