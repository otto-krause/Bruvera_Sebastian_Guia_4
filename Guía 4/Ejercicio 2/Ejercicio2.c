#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0;
    printf("Ingrese la altura del rectangulo ");
    scanf("%lf",&a);
    printf("Ingrese su anchura ");
    scanf("%lf",&b);
    double perim= (double) 2*a+2*b;
    double area= (double) a*b;
    printf("El valor del perimetro del rectangulo es de %g\n", perim);
    printf("El valor del area es de %g\n", area);
    return 0;
}