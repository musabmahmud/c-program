#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
int main()
{
    int m,n;
    printf("Enter two integers: ");
    scanf("%d %d", &n,&m);

    if( n == m)
    {
        printf("Result: %d = %d",n,m);
    }
    else if(n > m)
    {
        printf("First one is Larger:%d",n);
    }
    else
    {
        printf("Second number is Larger:%d",m);
    }
    return 0;
}
