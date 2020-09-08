#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
int main()
{
    int number;
    long long factorial;
    printf("Enter an integer: ");
    scanf("%d", &number);
    factorial = 1;
    while(number>0)
    {
        factorial = factorial * number;
        --number;
    }
    printf("factorial = %lld", factorial);
    return 0;
}
