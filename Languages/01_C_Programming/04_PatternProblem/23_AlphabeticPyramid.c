// alphabetic Pyramid pattern
/*
Enter the number :4
   A
  ABC
 ABCDE
ABCDEFG
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d" ,&num);

    for(int i = 1;i<=num;i++)
    {
        // for spaces
        for(int j = 1;j<=num-i;j++)
        {
            printf(" ");
        }

        // for the  aplphabet
        int ch = 65;
        for(int k = 1;k<=(2  * i ) -1;k++)
        {
            printf("%c",ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
}