// take the user input of rows and column and print the reactangle
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the number of rows :");
    scanf("%d", &n);
    printf("Enter the number of col : ");
    scanf("%d" , &m);

    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=m;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}