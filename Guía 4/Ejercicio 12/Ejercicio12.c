#include<stdio.h>
#include<stdlib.h>

int main()
{
    double sup_1=0, sup_2=0, sup_3=0;
    int pob_1=0, pob_2=0, pob_3=0;
    char pais_1[41], pais_2[41], pais_3[41];
    printf("Ingrese el nombre, la poblacion y la superficie del primer pais\n");
    scanf("%s", pais_1);
    scanf("%d", pob_1);
    scanf("%lf", sup_1);
    printf("Ingrese el nombre, la poblacion y la superficie del segundo pais\n");
    scanf("%s", pais_2);
    scanf("%d", pob_2);
    scanf("%lf", sup_2);
    printf("Ingrese el nombre, la poblacion y la superficie del tercer pais\n");
    scanf("%s", pais_3);
    scanf("%d", pob_3);
    scanf("%lf", sup_3);
    double dens_1= (double) pob_1/sup_1;
    double dens_2= (double) pob_2/sup_2;
    double dens_3= (double) pob_3/sup_3;
    if (dens_1>dens_2)
    {
        if (dens_2<dens_3)
        {
            printf("%s es el pais mas densamente poblado\n", pais_3);
        }
        else
        {
            printf("%s es el pais mas densamente poblado\n", pais_2);
        }
    }
    else
    {
        if (dens_1>dens_3)
        {
            printf("%s es el pais mas densamente poblado\n", pais_1);
        }
        else
        {
            printf("%s es el pais mas densamente poblado\n", pais_3);
        }
    }
    return 0;
}