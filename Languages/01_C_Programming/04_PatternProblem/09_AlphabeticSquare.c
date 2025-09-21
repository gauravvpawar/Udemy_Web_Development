// print the alphabetic square
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {
        int ch = 65;
        for(int j = 1;j<=num;j++)
        {
            printf("%c", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}