// alphabetic pyramid mast
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number : " );
    scanf("%d" , &num);

    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=num-i;j++)
        {
            printf(" ");
        }

        // for alphabet
        int ch = 65;
        for(int k = 1;k<=i;k++)
        {
            printf("%c" , ch);
            ch++;
        }

        //for the reverse character
         int rev_ch = 65 + i - 2;
        //  printf("rev ch %d : %c \n" ,rev_ch , rev_ch);
        for(int l = 1;l<=i-1;l++)
        {
            printf("%c", rev_ch);
            rev_ch--;
        }

        printf("\n");
    }

    return 0;
}