#include<stdio.h>
int main()
{
    int a,year,week;
    scanf("%d",&a);
    year=a/365;
    week=(a%365)/7;
    printf("%d
",year);
    printf("%d",week);
}