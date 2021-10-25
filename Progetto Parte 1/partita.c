#include "partita.h"

/* Function per verificare dov'è caduta la palla*/
/* Inputs= Il Campo,
 le due variabili pseudo casuali per l'array,
 l'intensità della palla
 Output= Risultato della partita.
 */

int partita(int campo[][5], int i, int j, int intens) {
    int result = 0;
    int end = 0;
/*
     Ciclo per verificare dov'è caduta la palla
     0= se cade sul player
     2= se cade sulla cassella gialla e verifica se
     l'intensità e minore di 3
     1= se cade sulla "racchetta"
     3= se esce fuori
     il ciclo do-while serve per far finire il ciclo e/o farlo ripete se la palla cade sul player
 */
    do {
        if (campo[i][j] != 0)
        {
            if (campo[i][j] == 1) {
                result = result + 1;
                end = end + 1;
            }
            else {
                if (campo[i][j] == 2) {
                    if (intens < 3) {
                        result = result + 1;
                        end = end + 1;
                    }
                    else {
                        end = end + 1;
                    }
                }
                else {
                    if (campo[i][j] == 3) {
                        result = result + 1;
                        end = end + 1;
                    }
                }
            }
        }
        else {
            end = 0;
        }
    } while (end < 0);
    return result;
}
