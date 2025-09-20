// sum of series by the formula
// 1 - 2 + 3 - 4 + 5 - 6
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int ans = 0;
    if(num % 2 == 0)
    {
        ans = -num / 2;
    }else{
        ans = (-num/2) + num;
    }


    printf("Sum of series : %d" , ans);
    return 0;
}