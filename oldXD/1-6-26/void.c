#include<stdio.h>

void fun(int x)
{
    x = 100;
}
int main()
{
    int a = 10;
    fun(a);
    printf("%d",a);
}