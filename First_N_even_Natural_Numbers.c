#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=a;i>0;i=i-1)
    {
        printf("%d ",2*i);
    }
}