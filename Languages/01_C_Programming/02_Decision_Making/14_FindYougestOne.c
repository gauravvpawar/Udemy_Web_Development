// take three ages and find the youngest one of them
#include<stdio.h>
int main()
{
    int ram, shyam , Ajay;
    printf("Enter the Ram Age : ");
    scanf("%d", &ram);

    printf("Enter the Shyam Age : ");
    scanf("%d", &shyam);

    printf("Enter the Ajay Age : ");
    scanf("%d", &Ajay);

    if(ram < shyam)
    {
        if(ram < Ajay)
        {
            printf("Ram is youngest one");
        }else{
            printf("Ajay is youngest one");
        }
    }else{
        if(shyam < Ajay)
        {
            printf("Shyam is youngest one");
        }else{
            printf("Ajay is yougest one");
        }
    }

    return 0;
}