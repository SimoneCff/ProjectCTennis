//
//  Ricerca Contatto.c
//  Telefono
//
//  Created by Simone Cioffi on 22/01/2020.
//  Copyright © 2020 Simone Cioffi. All rights reserved.
//

#include "Ricerca Contatto.h"


void Ricerca_B(Contatti rubrica[],int len,int *res) {
    char nome[30],cognome[30];
    int i;
    int risp = 0;
    int end=0;
    
    fflush(stdin);
    do {
    fflush(stdin);
    printf("Attenzione: Mettere nome e cognome con la \n prima parola in maiuscolo \n Es: Simone Cioffi e non simone cioffi");
    printf("\n");

    printf("Metti il nome del contatto da cercare \n");
    printf(":");
    gets(nome);

    printf("Metti il cognome del contatto da cercare \n");
    printf(": ");
    gets(cognome);
    
    
    for (i=0; i<len; i++) {
        if(strcmp(nome,rubrica[i].nome)==0 && strcmp(cognome, rubrica[i].cognome)==0) {
            printf("Trovato!, il contatto %s %s ha come numero", rubrica[i].nome,rubrica[i].cognome);
            printf(" di telefono : %s \n", rubrica[i].numero);
            exit(EXIT_SUCCESS);
        }
       }
     printf("Mi dispiace, ma non è stato trovato nessun contatto corrispondete alla tua ricerca \n");
                           printf("Riprovare ?, 1 per continuare, 2 per chiudere il programma :");
                           scanf("%i", &risp);
                           switch (risp) {
                               case 1: end=0; break;
                               case 2: end=2; break;
                               default : printf("Commando non riconosciuto, Riprova :") ; break;
                            }
      } while(end<1);
    }




