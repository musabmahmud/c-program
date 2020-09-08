#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<math.h>
char lower_to_upper(char a1)
{
    char a2;
    a2 = ( a1 >= 'a' && a1 <= 'z') ? ('A' + a1 - 'a') : a1;
    return(a2);
}
main()
{
    char lower,upper;
    printf("Please enter a lower case Number: ");
    scanf("%c", &lower);
    upper = lower_to_upper(lower);
    printf("The Uppercase quivalent is %c ", upper);
}
