#include<stdio.h>
#include<math.h>
int main()
{
    float P,R,T,r,k,I,a,c;
    scanf("%f%f%f",&P,&R,&T);
    r=R/100;
    k=(1+r);
    I=pow(k,T);
    a=P*I;
    c=a-P;
    printf("%.2f",c);
}