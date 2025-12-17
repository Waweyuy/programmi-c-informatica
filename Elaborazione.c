#include <stdio.h>

int main() {
    int v[10];
    int i;

    //Inserimento Dei Valori
    printf("Inserisci 10 numeri interi\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    //Modifica Dei Valori 
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v[i] = v[i] / 2;   // numero pari
        } else {
            v[i] = v[i] * 3;   // numero dispari
        }
    }

    //Stampa Del Vettore
    printf("Vettore modificato\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
