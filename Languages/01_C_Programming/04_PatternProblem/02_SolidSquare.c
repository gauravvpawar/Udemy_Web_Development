// print the solid square
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of square : ");
    scanf("%d" , &n);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            printf("*");
        }

        //after each iteration of nested loop to start on new line
        printf("\n");
    }
    return 0;
}