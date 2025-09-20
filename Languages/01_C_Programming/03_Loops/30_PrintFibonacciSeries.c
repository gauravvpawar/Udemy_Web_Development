// print the fibonacci series
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the n number : ");
    scanf("%d" , &num);

    int firstnum= 0,secondNum= 1;
    printf("%d %d" , firstnum , secondNum);


    for(int i = 1;i<=num;i++)
    {
        int thirdNum = firstnum + secondNum;
        printf(" %d ", thirdNum);

        firstnum = secondNum;
        secondNum = thirdNum;
    }


    return 0;
}