//
//  Scelta_Programma.c
//  Telefono
//
//  Created by Simone Cioffi on 27/01/2020.
//  Copyright © 2020 Simone Cioffi. All rights reserved.
//

#include "Scelta_Programma.h"

int scelta(int sc){
    printf("Benvenuto, cosa vuoi fare ? \n");
       printf("Digitare 1 per visualizzare la rubrica \n");
       printf("Digitare 2 per ricercare un numero \n");
       printf("Digitare 3 per finire \n");
       printf(": ");
       
       int scelta=0;
       do {
       scanf("%i", &scelta);
       switch (scelta) {
           case 1: sc=1 ;
           break;
           
           case 2: sc=2 ;
           break;
               
           case 3: sc=3 ;
           break;
               
           default: printf("Commando non riconosciuto riprova :");
               break;
         }
       }while(scelta<1);
           return sc;
}
