// print the increasing as well as the decreasing pattern
#include<stdio.h>
void printing(int n)
{
    if(n==0)
    {
        return;
    }

    printf("%d \n", n);// it goes till if n= 5 -> 5 4 3 2 1
    printing(n-1);
    printf("%d\n" , n);// for each return it goest 1 2 3 4 5
} 

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    printing(num);

    return 0;
}