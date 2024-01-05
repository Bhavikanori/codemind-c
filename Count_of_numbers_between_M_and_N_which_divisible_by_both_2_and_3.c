#include<stdio.h>
int main()
{
    int m,n,i,j=0;
    scanf("%d%d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        if(i%2==0&&i%3==0)
        {
            j=j+1;
        }
    }
    printf("%d",j);
}