#include<stdio.h>
#include<stdlib.h>

int main ()
{
    double a=0, b=0;
    printf ("Ingrese el primer valor ");
    scanf ("%lf",&a);
    printf("Ingrese el segundo valor ");
    scanf("%lf", &b);
    system ("cls");
    printf("Los valores ingresados fueron: \n%g\n%g", a, b);
    return 0;
}