#include<stdio.h>
int sum(int a,int b)
{
    int suma = a+b;
    return suma;
}
int main()
{
    int x,y,s;
    scanf("%d%d", &x,&y);
    s = sum(x,y);
    printf("%d",s);
}
