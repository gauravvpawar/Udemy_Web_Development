// print the yougest one of three
#include<stdio.h>
int main()
{
    int ram ,shyam , Ajay;
    printf("Enter the age of ram : ");
    scanf("%d" , &ram);
    printf("Enter the age of Shyam : ");
    scanf("%d" , &shyam);
    printf("Enter the age of Ajay :");
    scanf("%d", &Ajay);

    if(ram < shyam && ram< Ajay)
    {
        printf("Ram is Yougest one");
    }else if(shyam < ram && shyam < Ajay)
    {
        printf("Shyam is Youngest one");
    }else{
        printf("Ajay is  yougest one");
    }
    return 0;
}