#include<stdio.h>
#include<stdlib.h>

int main()
{
    double suelbas=0;
    int cat=0, hcant=0;
    printf("Ingrese su sueldo basico, categoria (1, 2 u otro) y cantidad de hijos que tiene\n");
    scanf("%lf", &suelbas);
    scanf("%d", &cat);
    scanf("%d", &hcant);
    double suelh= (double) hcant*300;
    if (hcant>4)
    {
        suelh= (double) suelh+200;
    }
    if (cat==1)
    {
        double porc= (double) 10/100;
        double suelbastot= (double) suelbas+(suelbas*porc);
        double sueltot= (double) suelh+suelbastot;
        printf("El sueldo total es: $%g\n", sueltot);
    }
    else
    {
        if (cat==2)
        {
            double porc= (double) 20/100;
            double suelbastot= (double) suelbas+(suelbas*porc);
            double sueltot= (double) suelh+suelbastot;
            printf("El sueldo total es: $%g\n", sueltot);
        }
        else
        {
            double sueltot= (double) suelh+suelbas;
            printf("El sueldo total es: $%g\n", sueltot);
        } 
    }
    return 0;
}