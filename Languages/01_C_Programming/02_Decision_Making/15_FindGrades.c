// find the grades of given marks
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks : ");
    scanf("%d" , &marks);

    if(marks >= 91 && marks<100)
    {
        printf("Excellent");
    }else if(marks >= 81 && marks< 91)
    {
        printf("Very good");
    }else if(marks >=71 && marks < 81)
    {
        printf("Good");
    }else if(marks >= 61 && marks < 71)
    {
        printf("can do better");
    }else if(marks >= 51 && marks < 61)
    {
        printf("Average");
    }else if(marks >= 41 && marks < 51)
    {
        printf("Below Average");
    }else{
        printf("Fail");
    }
    return 0;
}