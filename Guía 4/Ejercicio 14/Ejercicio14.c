#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h=0, min=0, seg=0, uf=0;
    printf("Ingresar las horas, minutos, segundos y unidad final (numero entre 1 y 3)\n");
    scanf("%d", &h);
    scanf("%d", &min);
    scanf("%d", &seg);
    scanf("%d", &uf);
    if (uf==1)
    {
        int segt=h*3600+min*60;
        printf("Hay %d segundos en total\n", segt);
    }
    else
    {
        if (uf==2)
        {
            double mint= (double) h*60+seg/60;
            printf("Hay %g minutos en total\n", mint);
        }
        else
        {
            if (uf==3)
            {
                double ht= (double) min/60+seg/3600;
                printf("Hay %g horas en total\n", ht);
            }
            else
            {
                printf("Error...\n");
            }            
        }        
    }    
    return 0;
}