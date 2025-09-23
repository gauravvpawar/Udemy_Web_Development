// pointer is use for to store the address of another variable
// single pointer
#include<stdio.h>
int main()
{
    int a = 10;
    int *x = &a;

    printf("%p \n" , &a);
    printf("%p \n", &x);
    printf("%d \n", *x);

    // we can change the pointer value
    *x = 20; 
    printf("%d \n" , a);;
    return 0;
}