/*
 Questo Programma serve a simulare una partita di tennis con un giocatore contro il simulatore, dove il simulatore tira la palla e in base dove cade la palla il giocatore vince o perde. Il giocatore vince se "para" l'80 % delle palle. Il Programma simula 100 partite composte da 500 tiri.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "partita.h"



int partita(int[][5], int, int, int);

int main() {
    
    printf("----------------------------------------\n");
    printf("          Il Gioco del Tennis          \n");
    printf("----------------------------------------\n");
    printf("           Giocatore 1 Vs PC           \n");
    printf("----------------------------------------\n");
/*
           Array Contenente il "Campo"
 */
    int campo[4][5] = { 3,3,3,3,3,
                      3,2,0,2,3,
                      3,1,0,1,3,
                      3,2,0,2,3 };
    /* 3= cella blu
       2= cella gialla
       1= cella arancione
       0= posizione giocatore */
    srand(time(NULL));


    int i, j;
    
    /*
              Ciclo per La stampa del Campo con i colori
     */
    for (i = 0; i < 4; i++) {
        printf("              ");
        for (j = 0; j < 5; j++) {
           
            if (campo[i][j] == 3) {
                printf("\033[0;46m");
                printf("  ");
                printf("\033[0m");
            }
            if (campo[i][j] == 2) {
                printf("\033[0;103m");
                printf("  ");
                printf("\033[0m");
            }q
            if (campo[i][j] == 1) {

                printf("\033[0;43m");
                printf("  ");
                printf("\033[0m");
            }
            if (campo[i][j] == 0) {
                printf("\033[0;47m");
                printf("  ");
                printf("\033[0m");
            }
        }
        printf("\n");
    }
    printf("----------------------------------------\n");
    /*
          Dati per la simulazione della partita
     */
    int intens;
    int tiri = 0;
    int ris = 0;
    int result = 0;
    int partite = 0;

    int vinte = 0;

    /*
          Ciclo per la simulazione delle 100 partite
          e dei 500 tiri a partita (1 partita = 500 tiri)
     */
    do{
        do {
            intens = 0;
            intens = 1 + rand() % 10;
            /*
             i 2 rand per la simulazione casuale di dove
             cade la palla
             */
            i = rand() % 4;
            j = rand() % 5;

    /* Function per verificare dov'è caduta la palla*/
            ris = partita(campo, i, j, intens);
            tiri = tiri + 1;
            result = ris + result;
        } while (tiri < 499);
        partite = partite + 1;
/*
          Costrutto if per vedere se il giocatore ha respinto l'80 % delle palle (80% di 500 tiri = 400)
 */
        if (result >= 400)
            vinte = vinte + 1;
    } while (partite < 99);

    printf("il giocatore ha vinto %d partite su 100 \n", vinte);
    printf("----------------------------------------\n");
    return 0;
}


