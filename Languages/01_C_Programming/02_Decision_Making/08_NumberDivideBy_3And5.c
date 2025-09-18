// check the given number is divisible by 3 and 5
#include<Stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d" , &num);

    if(num % 3==0 && num% 5 == 0)
    {
        printf("Number is divisible by 3 and 5");
    }else{
        printf("Number is not divisible by 3 and 5");
    }
    return 0;
}