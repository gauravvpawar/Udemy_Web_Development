// to understand the pass by values
#include<stdio.h>
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a , b;
    printf("Enter the a number : ");
    scanf("%d",&a);
    printf("Enter the b number : ");
    scanf("%d" , &b);

    printf("Before swapping : \n");
    printf("a : %d \n",a);
    printf("b : %d \n",b);

    swap(a , b); // actual parameter
    printf("After swapping : \n");
    printf("a : %d \n",a);
    printf("b : %d \n",b);
    return 0;
}