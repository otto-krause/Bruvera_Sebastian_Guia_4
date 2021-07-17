#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0, c=0;
    printf("Ingrese tres valores\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (a<b)
    {
        if (b<c)
        {
            printf("Fueron ingresados de forma ascendente\n");
        }
        else
        {
            printf("No fueron ingresados de forma ascendente\n");
        }
    }
    else
    {
        printf("No fueron ingresados de forma ascendente\n");
    }
    return 0;
}