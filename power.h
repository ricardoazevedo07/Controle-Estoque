#include "stdio.h"
#include "stdlib.h"
//color
#define RED   "[31m"
#define GRN   "[32m"
#define YEL   "[33m"
#define BLU   "[34m"
#define MAG   "[35m"
#define CYN   "[36m"
#define WHT   "[37m"
#define RESET "[0m"

void menu(){
    int opcao;

     //**** menu
     printf("\n");
     printf(YEL"                              ## MENU ## \n"RESET);
     printf("\n");
     printf(WHT"                            ESCOLHA A OPÇAO\n"RESET);
     printf("\n");
     printf("                            1 - INSERIR PRODUTO\n");
     printf("                            2 - REMOVER PRODUTO\n");
     printf("                            3 - ALTERAR PRODUTO\n");
     printf("                            4 - CONSULTAR PRODUTO\n");
     printf ("\n");
     printf (WHT" DIGITE OPÇÃO: "RED);
     scanf("%d\n",&opcao);

     switch (opcao) {
         case 1:
         printf ("opcao %i \n",opcao);
         break;
         case 2:
         printf ("opcao %i \n",opcao);
         break;
         case 3:
         printf ("opcao %i \n",opcao);
         break;
         case 4:
         printf ("opcao %i \n",opcao);
         break;
         case 5:
         printf ("opcao %i \n",opcao);
         break;

     }

}
