// print the 0 and 1 pattern problem
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the  number : ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        int x;

        if(i % 2 != 0){
            x = 1;
        }else{
            x = 0;
        }

        for(int j = 1;j<=i;j++)
        {
            printf("%d " , x);
            if(x ==1)
            {
                x = 0;
            }else{
                x = 1;
            }
        }

        printf("\n");
    }
    return 0;
}