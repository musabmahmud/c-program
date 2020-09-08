#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
int main()
{
    int x;
    printf("Please Say me Time");
    scanf("%d",&x);
    if(x >= 0 && x < 12)
    {
        printf("Good Morning",x);
    }
    else if(x >= 12 && x <= 18)
    {
        printf("Good AfterNoon",x);
    }
    else if(x >= 18 && x < 24)
    {
        printf("You have too short time in hand", x);
    }
    else
    {
        printf("Time is running out of range",x);
    }
}
