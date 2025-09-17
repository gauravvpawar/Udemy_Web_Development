// find the area of circle = pie * r ^2
#include<stdio.h>
int main()
{
    float pie =3.142f;
    int radius;
    printf("Enter the radius of circle : ");
    scanf("%d" , &radius);

    float ans = pie * radius * radius;
    printf("Area of circle : %f" , ans);
    return 0;
}