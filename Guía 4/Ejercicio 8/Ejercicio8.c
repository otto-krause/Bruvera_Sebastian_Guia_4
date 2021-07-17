#include<stdio.h>
#include<stdlib.h>

int main()
{
    int hs=0, edad=0;
    printf("Ingrese su edad y las horas que uso el servicio\n");
    scanf("%d",&edad);
    scanf("%d",&hs);
    int prec=hs*50;
    double impto= (double) 33/100;
    if (edad<=50)
    {
        double import= (double) prec+(prec*impto);
        printf("Su importe total es de $%d y su importe con impuestos es de $%g\n", prec, import);
    }
    else
    {
        if (edad<=60)
        {
            double desc= (double) 20/100;
            double vnet= (double) prec-(prec*desc);
            double import= (double) vnet+(vnet*impto);
            printf("Su importe total es de $%g y su importe con impuestos es de $%g", vnet, import);
        }
        else
        {
            if (edad<=70)
            {
                double desc= (double) 30/100;
                double vnet= (double) prec-(prec*desc);
                double import= (double) vnet+(vnet*impto);
                printf("Su importe total es de $%g y su importe con impuestos es de $%g", vnet, import);
            }
            else
            {
                double desc= (double) 50/100;
                double vnet= (double) prec-(prec*desc);
                double import= (double) vnet+(vnet*impto);
                printf("Su importe total es de $%g y su importe con impuestos es de $%g", vnet, import);
            } 
        }
    }
    return 0;
}