#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0;
    printf("Ingrese la cantidad de metros cuadrados ");
    scanf("%lf",&a);
    printf("Ingrese la cantidad de fuerza ejercida ");
    scanf("%lf",&b);
    double pa= (double) b/a;
    printf("La presion es de %g Newtons sobre metro cuadrado\n", pa);
    return 0;
}