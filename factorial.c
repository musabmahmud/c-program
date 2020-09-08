#include<stdio.h>
int Fac(int n)
{
    if(n >= 1)
        return n*Fac(n-1);
    else
        return 1;
}
int main()
{
    int a,z;
    printf("Enter a positive num: ");
    scanf("%d", &a);
    printf("Factorial of %d = %d",n,Fac(n));
    return 0;
}
