// statement in c also work in if else
#include<stdio.h>
int main()
{
    int x;
    if(x = 10)
    {
        printf("This works\n");
    }

    if(11)
    {
        printf("This also work\n");
    }

    // for negative value this also work
    if(-5)
    {
        printf("this work also for negative value\n");
    }
    if(0)
    {
        printf("This didnt work");
    }
    return 0;
}