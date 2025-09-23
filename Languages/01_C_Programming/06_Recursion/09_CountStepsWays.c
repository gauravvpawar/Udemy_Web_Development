// count the number of ways to pass the stairs
/*
if n = 5
1+2+2
2+1+2
2+2+1
1+1+1+1+1
1+1+1+2
1+2+1+1
2+1+1+1
1+1+2+1
number of ways = 8
*/
#include<stdio.h>
int  findWays(int num)
{
    if(num == 1 || num == 2)
    {
        return num;
    }

    return findWays(num - 1) + findWays(num -2);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Number of ways : %d" , findWays(num));
    return 0;
}