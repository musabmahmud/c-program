#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
int main()
{
    int i,n,sum = 0;

    for(i = 1; i <= 10 ; ++i)
    {
        printf("Enter an number%d: ",i);
        scanf("%d",&n);
        if(n <= 0)
        {
            break;
        }
        sum = sum + n;
    }
    printf("The Total Sum is: %d", sum);
    return 0;
}
