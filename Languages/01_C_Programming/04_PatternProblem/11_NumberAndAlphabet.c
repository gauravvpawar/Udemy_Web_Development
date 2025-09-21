// print the number and alphabet pattern 
// if the number is odd print the number or else print the alphabet

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    for(int i = 1;i<=num;i++)
    {
        int ch = 65;
        for(int j = 1;j<=i;j++)
        {
            if(i % 2 != 0)
            {
                printf("%d" ,j);
            }else{
                printf("%c" ,ch);
                ch++;
            }
        }

        printf("\n");
    }
    return 0;
}