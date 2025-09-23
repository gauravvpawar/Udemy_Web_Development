// print the number in ascending order

#include<stdio.h>
void printing(int num)
{
    if(num == 0)
    {
        return;
    }

    printing(num-1);
    printf("%d " , num);
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    printing(num);
    return 0;
}