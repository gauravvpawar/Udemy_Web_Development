// to understand the function priority 
// in c whenever you can the function the funtion must be declare before where their they are calling

#include<stdio.h>
void Japan()
{
    printf("Inside Japan");
}

void Australia()
{
    printf("Inside Australia\n");
    Japan();
}

void India()
{
    printf("Inside India\n");
    Australia();
}

int main()
{
    India();
    return 0;
}