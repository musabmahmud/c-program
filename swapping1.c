#include <stdio.h>
void swap(int*a,int*b)
{
    int z;

    z = *b;
    *b = *a;
    *a = z;
}
//sawp function define

int main()
{
    int x,y;

    printf("Enter the value of x and y\n");
    scanf("%d%d",&x,&y);
    printf("Before Swapping\n x = %d\n y = %d\n",x ,y);
    swap(&x,&y);
    printf("Before Swapping\n x = %d\n y = %d\n",x ,y);
}
