// count the number of ways of stairs

#include<stdio.h>
int count(int n)
{
    if(n == 1 || n == 2|| n == 3)
    {
        return n;
    }

    return count(n-1) + count(n-2)+ count(n-3);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" ,&num);

    printf("ways : %d",count(num));
    return 0;
}