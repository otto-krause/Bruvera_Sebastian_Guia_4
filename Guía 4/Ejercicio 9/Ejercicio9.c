#include<stdio.h>
#include<stdlib.h>

int main()
{
    char cat;
    int hs=0, suel=0;
    printf("Ingrese sus horas trabajadas y su categoria (A, B o C)\n");
    scanf("%d", &hs);
    scanf(" %c", &cat);
    if (cat=='A'||cat=='a')
    {
        suel=hs*200;
        printf("El suelo ganado es de $%d\n", suel);
    }
    else
    {
        if (cat=='B'||cat=='b')
        {
            suel=hs*180;
            printf("El suelo ganado es de $%d\n", suel);
        }
        else
        {
            if (cat=='C'||cat=='c')
            {
                suel=hs*150;
                printf("El suelo ganado es de $%d\n", suel);
            }
            else
            {
                suel=hs*0;
                printf("El suelo ganado es de $%d\n", suel);
            }
        }        
    }   
    return 0;
}