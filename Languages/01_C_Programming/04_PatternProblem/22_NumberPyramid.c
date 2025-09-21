// print the number pyramid
/*
Enter the number : 4
   1
  123
 12345
1234567
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=num-i;j++)
        {
            printf(" ");
        }

        for(int k = 1;k<=(2 * i) -1;k++)
        {
            printf("%d" ,k);
        }

        printf("\n");
    }

    return 0;
}