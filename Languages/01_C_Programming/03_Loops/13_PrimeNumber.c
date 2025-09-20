// print the n prime number
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the  number: ");
    scanf("%d",&num);

    int check = 1;

    if(num == 1)
    {
        printf("1 is not in prime number 1 is composite number");
    }
    for(int i = 2;i<num;i++)
    {
        if(num% i == 0)
        {
            check = 0;
            break; // it instant termination of block
        }
    }

    if(check == 1)
    {
        printf("Given number is prime number");
    }else{
        printf("Given number is not prime number");
    }
    return 0;
}