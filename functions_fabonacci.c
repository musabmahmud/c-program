#include<stdio.h>
int f(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return (f(n-1) + f(n-2));
}
int main()
{
    int n,i = 0,c;
    printf("Fibonacci series terms are:");
    scanf("%d", &n);


    for (c = 1;c <=n ;c++){
        printf("%d\n",f(i));
        i++;
    }
    return 0;
}
