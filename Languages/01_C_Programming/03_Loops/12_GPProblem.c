// print the GP format question
// g p -> 100 , 50 , 25 , 12.5
#include<stdio.h>
int main()
{
    float n = 100.00f;
    for(int i = 1;i<10;i++)
    {
        printf("%f " ,n);

        n /= 2;
    }
    return 0;
}