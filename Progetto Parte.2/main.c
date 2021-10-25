
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma warning(disable:4996)

typedef struct contatto_tel{
    char nome[30];
    char cognome[30];
    char domicilio[100];
    char numero[30];
}Contatti;

int scelta(int sc);

void ord_inser(Contatti [], int *);

void Ricerca_B(Contatti [],int ,int *);

int main() {
    int len=30;
    int res=0;
    int sc=0;
    Contatti rubrica[30]= {"Simone","Cioffi","Via Donnalbina, 79","3459623836",
                           "Mario","Giordano","Via Francesco Del Giudice, 114","3478392342",
                           "Nicola","Improta","Via Bologna, 98","3427390302",
                           "Gigi","Malvone","Via San Domenico Soriano, 131","3220982376",
                           "Aniello","Genovese","Corso Vittorio Emanuele, 37","3789043021",
                           "Ambra","Cartinelli","Via Sediole di Porto, 118","3249872332",
                           "Annabella","Longo","Via Venezia, 90","3417932688",
                           "Quarantino","Russo","Piazza Giuseppe Garibaldi, 35","3675378214",
                           "Dalia","Romani","Via Guantai Nuovi, 16","3948694503",
                           "Angelo","Beneventi","Via Castelfidardo, 36","3718961593",
        
                           "Ovidio","Trevisiani","Via Campi Fegrei, 92","3367641776",
                           "Adelmo","Milani","Via degli Aldobrandeschi, 83","3499653543",
                           "Angelo","Piccio","Via Capo le Case, 134","3123307149",
                           "Quintillia","Calabrese","Via Pisanelli, 81","3251554494",
                           "Giulia","Capon","Via Roma, 109","3685489761",
                           "Lodovica","Mazzanti","Via Silvio Spaventa, 118","3870964104",
                           "Gina","Costa","Via Duomo, 73","3851813770",
                           "Renato","Dellucci","Via Medina, 54","3353823663",
                           "Albertina","Costa","Via Miguel De Cervantes, 10","3966573404",
                           "Bartolomea","Rizzo","Via Giacinto Gigante, 146","3376686504",
        
                           "Sabrina","Loggia","Via Colonnello Galliano, 91","3846767900",
                           "Novella","Sal","Via Vipacco, 145","3352925238",
                           "Edoardo","Trentini","Via Campi Flegrei, 56","3286662650",
                           "Nadia","Gallo","Via degli Aldobrandeschi, 148","3515690739",
                           "Martino","Palermo","Via Matteo §Schilizzi, 62","381573381",
                           "Gilda","Ferrari","Piazza San Carlo, 84","3907937919",
                           "Edoardo","Zito","Via Giberti, 80","3698536185",
                           "Roberto","Genovesi","Via Giulio Camuzzoni, 46","3202168244",
                           "Larua","Padovano","Corso Novara, 54","3532352047",
                           "Anastasio","Manna","Via Pisanelli,, 134","3292932859"};
    
    printf("------Rubrica Telefonica------\n");
    do {
        sc = scelta(sc);
        if (sc==1) {
            ord_inser(rubrica, &len);
        }
        else if (sc==2)  {
            Ricerca_B(rubrica, len, &res);
        }
        if (sc==3) {
            return 0;
        }
      }while(sc<4);
    return 0;
  }
    
