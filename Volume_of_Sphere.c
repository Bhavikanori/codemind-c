#include<stdio.h>
int main()
{
    int R;
    float volume;
    scanf("%d",&R);
    volume=1.333333*3.14*R*R*R;
    printf("%.2f",volume);
}