#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a=0, b=0;
    printf("Ingrese la cantidad de hombres ");
    scanf("%d",&a);
    printf("Ingrese la cantidad de mujeres ");
    scanf("%d",&b);
    double canttot=a+b;
    double porch=(a/canttot)*100;
    double porcm=(b/canttot)*100;
    printf("El porcentaje de hombres es de %g y el de mujeres es %g\n", porch, porcm);
    return 0;
}