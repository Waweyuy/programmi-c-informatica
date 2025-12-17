/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    int main () {
    int i;
    int v[10];
    
    //Primo Vettore
        for(i = 0; i < 10; i++) {
        v[i] = i + 1;
    }
    
    printf("Vettori Normali\n");
        for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
    
    //Secondo Vettore
        for(i = 0; i < 10; i++) {
        v[i] = v[i] * 10;
    }
    
    printf("Vettori Moltiplicati\n");
        for(i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }   
    printf("\n");
    
    //Terzo Vettore
     printf("Inserisci 10 numeri interi\n");
        for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    printf("Vettori Inseriti\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
    }