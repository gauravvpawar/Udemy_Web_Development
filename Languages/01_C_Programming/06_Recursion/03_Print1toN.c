// print the number is in the increasing order

#include<stdio.h>
void printing(int x ,int n)
{
    if(x > n)
    {
        return;
    }

    printf("%d ", x);
    printing(x+1, n);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d" ,&n);

    printing(1 , n);
    return 0;

}