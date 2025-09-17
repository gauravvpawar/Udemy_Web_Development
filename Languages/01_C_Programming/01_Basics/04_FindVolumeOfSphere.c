// volume of sphere = 4/3 pie r^3
#include<Stdio.h>
int main()
{
    int radius;
    float pie = 3.14159265359f;

    printf("Enter the radius : ");
    scanf("%d" , &radius);

    float ans = (4.0f / 3.0f )* pie * radius* radius * radius;
    printf("Radius of sphere : %f" , ans);
    return 0;
}