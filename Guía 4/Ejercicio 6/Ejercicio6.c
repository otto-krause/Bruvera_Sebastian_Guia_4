#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0;
    printf("Ingrese el valor entero ");
    scanf("%d",&a);
    double r= (double) a/8;
    printf("La octava parte de %d es %g\n", a, r);
    return 0;
}