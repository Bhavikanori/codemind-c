#include<stdio.h>
int main()
{
    int a,b,x,d;
    scanf("%d%d%d",&a,&b,&x);
    d=b*1+x*2;
    if(d>=a)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}