// right alphabetic triangle
/*
Enter the number : 4
   A
  AB
 ABC
ABCD
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

        int ch = 65;
        for(int k = 1;k<=i;k++)
        {
            printf("%c" , ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
}