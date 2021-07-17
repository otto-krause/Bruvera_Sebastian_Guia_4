#include<stdio.h>
#include<stdlib.h>

int main()
{
    double a=0, b=0, c=0;
    printf("Ingrese tres valores\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (a==b)
    {
        if (b==c)
        {
            printf("Todos son iguales\n");
        }
        else
        {
            printf("Hay dos iguales y uno distinto\n");
        }
    }
    else
    {
        if (b==c)
        {
            printf("Hay dos iguales y uno distinto\n");
        }
        else
        {
            printf("Todos son distintos entre si\n");
        }
    }
    return 0;
}