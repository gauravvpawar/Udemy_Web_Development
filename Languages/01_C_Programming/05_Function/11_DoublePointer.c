// double pointer is use to store the address of the another pointer variable

#include<stdio.h>
int main()
{
    int a = 10;
    int *x = &a;
    int **y = &x;

    printf("%p \n" , &a);
    printf("%p \n" , &x);
    printf("%p \n" , &y);

    // for the to access the values
    printf("%d \n" , a);
    printf("%d \n" , *x);
    printf("%d \n" , **y);
    return 0;
}