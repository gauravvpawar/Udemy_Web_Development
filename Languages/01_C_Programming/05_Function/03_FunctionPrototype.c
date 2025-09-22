// function prototype 
// insead of function declare before where they called you can solve by function prototype

#include<stdio.h>
int add(int , int);//you can declare also this
int add(int a ,int b);// both are valid
int main()
{
    int ans = add(5, 10);
    printf("%d" , ans);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

