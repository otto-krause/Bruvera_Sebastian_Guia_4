#include<stdio.h>
#include<stdlib.h>

int main()
{
    double kg=0, alt=0;
    printf("Ingrese su peso (en Kg) y altura (en metros)\n");
    scanf("%lf", &kg);
    scanf("%lf", &alt);
    double imc= (double) kg/(alt*alt);
    if (imc<20)
    {
        printf("Estado: Bajo peso");
    }
    else
    {
        if (imc>25)
        {
            printf("Estado: Excedido");
        }
        else
        {
            printf("Estado: Peso ideal");
        }        
    }   
    return 0;
}