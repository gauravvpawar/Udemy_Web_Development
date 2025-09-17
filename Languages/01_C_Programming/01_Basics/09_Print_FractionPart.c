// print the fractional part of the given number
#include<Stdio.h>
int main()
{
    float number;
    printf("Enter the fractional number : ");
    scanf("%f" , &number);

    int x = number;
    float ans = number - x;
    printf("Fractional part of number : %f" ,ans);
    return 0;
}