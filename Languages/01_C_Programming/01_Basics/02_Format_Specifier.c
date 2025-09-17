// to print the different basic data type have its different format specifier
#include<stdio.h>
#include <stdbool.h>

int main()
{
    int a; // it is declaration of variable
    a = 10;// it is assigning valus in the variable
    printf("%d \n" , a);

    short b = 20;
    printf("%hd \n", b);

    char ch = 'a';
    printf("%c \n" ,ch);

    bool check = true;
    printf("%d \n" , check); // in c boolean value is mostly use for 0 or 1 for decision making

    float g = 9.8f;
    printf("%f \n" , g);

    long large = 1234567890l;
    printf("%ld \n",large);
    return 0;
}