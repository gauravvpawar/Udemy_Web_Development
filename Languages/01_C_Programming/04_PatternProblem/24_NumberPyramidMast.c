// print the number pyramid

/*
Enter the number : 5
    1
   121
  12321
 1234321
123454321
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    for(int i = 1;i<=num;i++)
    {
        // for spaces
        for(int j = 1;j<=num - i;j++)
        {
            printf(" ");
        }

        // for 1 to n star numberright pyramid pattern
        for(int k = 1;k<=i;k++)
        {
            printf("%d" , k);
        }

        int a = i - 1;
        for(int l = 1;l<= i - 1;l++)
        {
            printf("%d" ,a);
            a--;
        }

        printf("\n");
    }
    return 0;
}