#include<stdio.h>
int max(int a,int b)
{
    if(a > b)
        return a;
    else
        return b;
}
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int ret;
    ret = max(x,y);
    printf("Max value is : %d\n", ret);
    return 0;
}
