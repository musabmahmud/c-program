#include<stdio.h>
int sum(int n)
{
    if (n != 0)
        return n + sum(n-1);
    else
        return n;
}
int main()
{
    int n,result;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    result = sum(n);
    printf("Sum = %d",result);
    return 0;
}
