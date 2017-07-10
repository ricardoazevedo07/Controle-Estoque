#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "MENU.h"

/*void menu();
void menu_categoria();
void PASSAGEM(LISTA *, char);
LISTA * PASSAGEM_EXTERNA(LISTA *, char);
char ch_Ext;
LISTA MEMORIA;


LISTA *PASSAGEM_EXTERNA(LISTA *MEM_EXT, char opExt){
return MEM_EXT;
}*/





int main()
{



    //"AS INSER��ES ABAIXO APENAS VALIDAM AS ESTRUTURAS E FUN��ES CRIADAS ACIMA
 BEBIDA_LISTA  = CRIA_LISTA();
 LIMPEZA_LISTA = CRIA_LISTA();
 BELEZA_LISTA  = CRIA_LISTA();
 SAUDE_LISTA   = CRIA_LISTA();
 HIGIENE_LISTA = CRIA_LISTA();
 ALIMENTO_LISTA = CRIA_LISTA();


    ARVORE *LIMP  = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    LIMP->CATEGORIA =LIMPEZA_LISTA;

    ARVORE *BEBI = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    BEBI->CATEGORIA =BEBIDA_LISTA;

    ARVORE *BELE = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    BELE->CATEGORIA =BELEZA_LISTA;

    ARVORE *SAUD = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    SAUD->CATEGORIA =SAUDE_LISTA;

    ARVORE *HIGI = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    HIGI->CATEGORIA =HIGIENE_LISTA;

    ARVORE *ALIM = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
   //ALIM->CATEGORIA = CRIA_LISTA();

    ALIM->CATEGORIA =ALIMENTO_LISTA;



    RAIZ = cria(LIMP,BEBI,BELE,SAUD,HIGI,ALIM);
    INSERE(&ALIM->CATEGORIA,MEMORIA);

  menu();


    return 0;
}
