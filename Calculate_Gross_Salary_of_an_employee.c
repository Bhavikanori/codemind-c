#include<stdio.h>
int main()
{
    float salary,HRA,DA,PF,grosssalary;
    scanf("%f%f%f",&salary,&HRA,&DA);
    PF=(12*salary/100);
    grosssalary=salary+HRA+DA+PF;
    printf("%.2f
%.2f",PF,grosssalary);
}