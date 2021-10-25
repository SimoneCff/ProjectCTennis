//
//  ordinamento.c
//  Telefono
//
//  Created by Simone Cioffi on 22/01/2020.
//  Copyright © 2020 Simone Cioffi. All rights reserved.
//

#include "ordinamento.h"
#pragma warning(disable:4996)

void ord_inser(Contatti rubrica[], int *len) {
    int l,j;
    int g;
    char temn[30],temc[30], temnum[30], temdomi[100];
    for (l=1; l<*len; l++) {
        j=l-1;
        strcpy(temn,rubrica[l].nome);
        strcpy(temc,rubrica[l].cognome);
        strcpy(temdomi,rubrica[l].domicilio);
        strcpy(temnum, rubrica[l].numero);
        while((j>=0) && (strcmp(temc,rubrica[j].cognome)<0)) {
            strcpy(rubrica[j+1].nome,rubrica[j].nome);
            strcpy(rubrica[j+1].cognome,rubrica[j].cognome);
            strcpy(rubrica[j+1].domicilio,rubrica[j].domicilio);
            strcpy(rubrica[j+1].numero, rubrica[j].numero);
            j--;
        }
        strcpy(rubrica[j+1].nome,temn);
        strcpy(rubrica[j+1].cognome,temc);
        strcpy(rubrica[j+1].domicilio,temdomi);
        strcpy(rubrica[j+1].numero,temnum);
    }
    
    for (g=0; g<*len; g++){
        printf("%s %s, %s, %s ", rubrica[g].nome, rubrica[g].cognome, rubrica[g].numero, rubrica[g].domicilio);
        printf("\n");
    }
}
