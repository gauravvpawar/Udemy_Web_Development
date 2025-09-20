// learn about the scope of the variable
#include<stdio.h>
int main()
{
    for(int i = 1;i<=10;i++)
    {
        int k = 0;
        printf(" i : %d \n", i);
    }
        // printf("k: %d" ,k); you cant access this  variable outside  the block
        return 0;
}