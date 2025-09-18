// write  the program to find the weather area of reactangle and is greater than the Perimeter of reactangle
#include<stdio.h>
int main()
{
    int length , breadth;
    printf("Enter the length of reactangle : ");
    scanf("%d" , &length);
    printf("Enter the breadth of reactangle : ");
    scanf("%d", &breadth);

    int area = length * breadth;
    int Perimeter = 2 * (length +breadth);

    if(area > Perimeter)
    {
        printf("The area is greater than the perimeter");
    }else{
        printf("The Perimeter is greater than the area");
    }
    return 0;
}