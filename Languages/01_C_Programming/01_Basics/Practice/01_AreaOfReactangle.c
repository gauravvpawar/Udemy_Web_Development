// find the area of reactangle

#include<stdio.h>
int main()
{
    int length , breadth;
    printf("Enter the length of reactangle : ");
    scanf("%d" , &length);
    printf("Enter the breadth of reactangle : ");
    scanf("%d" , &breadth);

    int area = length * breadth;
    printf("Area of reactangle : %d" , area);
    return 0;
}