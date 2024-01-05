#include<stdio.h>
int main()
{
    int a,p=1,i;
    scanf("%d",&a);
    for(i=a;i>0;i=i-1)
    {
        p=p*i;
    }
    printf("%d",p);
}