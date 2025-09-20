// print all ASCII value of charcter
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of character do you want to print : ");
    scanf("%d" ,&num);

    int ch = 65;
    for(int i = 1;i<=num;i++)
    {
        printf("%c -> %d\n" , ch , ch);
        ch = ch+1;
    }
    
    return 0;
}