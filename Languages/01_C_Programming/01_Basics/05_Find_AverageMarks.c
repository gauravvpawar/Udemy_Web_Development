// find the average marks of five subjects
#include<Stdio.h>
int main()
{
    float m1 , m2 , m3 , m4 , m5;
    printf("Enter the marks first : ");
    scanf("%f" , &m1);
    printf("Enter the marks second  : ");
    scanf("%f", &m2);
    printf("Enter the marks third : ");
    scanf("%f", &m3);
    printf("Enter the marks fourth : ");
    scanf("%f" ,&m4);
    printf("Enter the marks fifth : ");
    scanf("%f" ,&m5);

    float ans = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Average of five subject : %f" ,  ans);
    return 0;
}