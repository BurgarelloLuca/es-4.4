#include <stdio.h>
int main() {
    float voto, somma, media;
    int nvoti;
    somma = 0;
    nvoti = 0;
    while (voto != 0) {
        printf("Inserisci i voti");
        scanf("%f", &voto);
        somma += voto;
        nvoti++;
    }
        media=somma/(nvoti-1);
        printf("La media dei voti e': %.2f", media);
    return 0;
}

