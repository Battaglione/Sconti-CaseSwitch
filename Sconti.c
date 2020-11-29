#include <stdio.h>
#include <stdlib.h>

int main()
{
    float PrezzoTot, Sconto;
    int SelSconto;
    do
    {
    printf("Inserire la spesa totale: \n");
    printf(">");
    scanf("%d",&PrezzoTot);

    }while(PrezzoTot < 0);
    if(PrezzoTot < 50){
        SelSconto = 1;
    }
    else{
        if(PrezzoTot < 65){
            SelSconto = 2;
        }
    }
    if(PrezzoTot < 80){
        SelSconto = 3;
        }
    else{
        if(PrezzoTot >= 100){
            SelSconto = 3;
        }
    }
    switch (PrezzoTot){
        case 0:
            printf("Nessuno Sconto Applicato");
            break;
        case 1:
            Sconto = PrezzoTot - 5%;
            printf("Il prezzo finale e' %d", Sconto);
            break;
        case 2:
            Sconto = PrezzoTot - 6%;
            printf("Il prezzo finale e' %d", Sconto);
            break;
        case 3:
            Sconto = PrezzoTot - 7%;
            printf("Il prezzo finale e' %d", Sconto);
            break;
        case 4:
            Sconto = PrezzoTot - 10%;
            printf("Il prezzo finale e' %d", Sconto);
            break;
    }
    return 0;
}
