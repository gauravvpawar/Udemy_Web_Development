// learn about the increament and decreament 
#include<stdio.h>
int main()
{
    int a = 10;
    int b = a++; // first assign the value then use
    int c = ++a;// first increament value then use

    printf("a : %d\n" , a); // a= 12;
    printf("b : %d \n" , b); // b = 10
    printf("c : %d\n" , c); //c = 12
    return 0;
}