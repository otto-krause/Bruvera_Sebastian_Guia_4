#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0;
    printf("Ingrese dos numeros\n");
    scanf("%lf",&a);
    scanf("%lf",&b);
    if (a>b)
    {
        printf("%g es el numero mayor\n", a);
    }
    else
    {
        if (a<b)
        {
            printf("%g es el numero mayor\n", b);
        }
        else
        {
            printf("Los dos numeros son iguales\n");
        }
        
        
    }
    return 0;
}