#include<stdio.h>
int main()
{
    int r,N,c=0;
    scanf("%d",&N);
    while (N!=0)
    {
        r=N%10;
        N=N/10;
        c=c+1;
    }
    printf("%d",c);
}