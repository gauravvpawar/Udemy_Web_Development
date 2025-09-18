// find the axis rely on the same axis or not
#include<stdio.h>
int main()
{
    float x1 ,y1 , x2,y2 , x3 , y3;
    printf("Enter the x1 point : ");
    scanf("%f" , &x1);
    printf("Enter the y1 point : ");
    scanf("%f" , &y1);

    printf("Enter the x2 point : ");
    scanf("%f" , &x2);
     printf("Enter the y2 point : ");
    scanf("%f" , &y2);

     printf("Enter the x3 point : ");
    scanf("%f" , &x3);
     printf("Enter the y3 point : ");
    scanf("%f" , &y3);

    float m1 = (y2- y1) / (x2 - x1);
    float m2 = (y3 - y2) /(x3 - x2);

    if(m1 == m2)
    {
        printf("They rely on the same points difference");
    }else{
        printf("They are not rely  on the  same points difference");
    }
    return 0;
}