// ṭo print 0 and 1 in another way
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            if((i + j) % 2 == 0)
            {
                printf("1");
            }else{
                printf("0");
            }
        }

        printf("\n");
    }

    return 0;
}