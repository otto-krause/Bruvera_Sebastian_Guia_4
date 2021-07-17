#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0, c=0, d=0, e=0;
    printf("Ingrese los valores de las resistencias\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    double total= (double) a+b+c+d+e;
    printf("La resistencia en serie es de %g\n", total);
    return 0;
}