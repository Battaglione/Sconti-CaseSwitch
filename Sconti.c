#include <stdio.h>

int main (){
    float PrezzoFin, Sconto, Prezzo;
    int SelSconto;
    
    Prezzo = 0;

    do{
        printf("Inserire il prezzo del prodotto:\n");
        scanf("%f", &Prezzo);
    }while(Prezzo <= 0);

    if(Prezzo >= 50){
        SelSconto = 1;
    }
    if(Prezzo >= 65){
        SelSconto = 2;
    }
    if(Prezzo >= 70){
        SelSconto = 3;
    }
    if(Prezzo >= 100){
        SelSconto = 4;
    }

    printf("%d\n", SelSconto);

    switch(SelSconto){
        case 1:
        Sconto = 0.05;
        PrezzoFin = Prezzo -  (Prezzo * Sconto);
        printf("Il prezzo finale e' %.2f\n", PrezzoFin);
        break;

        case 2:
        Sconto = 0.06;
        PrezzoFin = Prezzo - Sconto;
        printf("Il prezzo finale e' %.2f\n", PrezzoFin);
        break;

        case 3:
        Sconto = 0.07;
        PrezzoFin = Prezzo -  (Prezzo * Sconto);
        printf("Il prezzo finale e' %.2f\n", PrezzoFin);
        break;

        case 4:
        Sconto = 0.1;
        PrezzoFin = Prezzo -  (Prezzo * Sconto);
        printf("Il prezzo finale e' %.2f\n", PrezzoFin);
        break;
    }
    return 0;
}
