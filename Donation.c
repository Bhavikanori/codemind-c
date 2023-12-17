#include<stdio.h>
int main()
{
    int y,x;
    scanf("%d%d",&y,&x);
    if(y>x)
    {
        printf("%d",y-x);
    }
    else
    {
        printf("%d",x-y);
    }
    
}