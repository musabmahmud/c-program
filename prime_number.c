#include<stdio.h>
#include<conio.h>
int Prime_Number(int n)
{
    int i, new;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {
        // condition for nonprime number
        if(n%i == 0)
        {
            new = 1;
            break;
        }
    }
}
int main()
{
    int new=0,n,i;
    new = Prime_Number(i);
    if (new == 0)
    {
        printf("It is a not prime number.", i);
     }
     else
    {
        printf("It is a prime number.", i);
    }
    return new;
}
