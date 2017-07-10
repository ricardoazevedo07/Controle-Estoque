
#include <stdio.h>
#include <stdlib.h>
#include "ArvoreLista.h"



LISTA MEMORIA;
LISTA* BEBIDA_LISTA;
LISTA* LIMPEZA_LISTA;
LISTA* BELEZA_LISTA;
LISTA* SAUDE_LISTA;
LISTA* HIGIENE_LISTA;
LISTA* ALIMENTO_LISTA;
ARVORE *RAIZ;


void cad_limpeza(){
   fflush(stdin);

  printf("DIGITE A SUBCATEGORIA\n");
  fgets(MEMORIA.subcategoria,24,stdin);
  fflush(stdin);

  printf("DIGITE O NOME\n");
  //fgets(MEMORIA.nome,19, stdin);
  scanf(" %s", MEMORIA.nome);
  fflush(stdin);

  printf("DIGITE A LOCALIZACAO\n");
  fgets(MEMORIA.localizacao,19, stdin);
  fflush(stdin);

  printf("DIGITE A VALIDADE - ANO\n");
  scanf("%d", &MEMORIA.validadeAno);
  fflush(stdin);

  printf("DIGITE A VALIDADE - MES\n");
  scanf("%d", &MEMORIA.validadeMes);
  fflush(stdin);

  printf("DIGITE A VALIDADE - DIA\n");
  scanf("%d", &MEMORIA.validadeDia);
  fflush(stdin);


  printf("DIGITE A QUANTIDADE\n");
  fgets(MEMORIA.nome,19, stdin);
  fflush(stdin);

  printf("DIGITE O TIPO DE DEMANDA\n");
  fgets(MEMORIA.nome,19, stdin);
  fflush(stdin);

  printf("DIGITE O NOME DO FORNECEDOR\n");
  fgets(MEMORIA.nome,19, stdin);
  fflush(stdin);

  printf("\n\nDADOS RELATIVOS A ENTREGA DO PRODUTO\n\n");
  printf("DIGITE O DIA DE CHEGADA\n");
  scanf("%d",&MEMORIA.chegadaDia);
  fflush(stdin);

  printf("DIGITE O MES DE CHEGADA\n");
  scanf("%d",&MEMORIA.chegadaMes);
  fflush(stdin);

  printf("DIGITE O ANO DE CHEGADA\n");
  scanf("%d",&MEMORIA.chegadaAno);
  fflush(stdin);
  INSERE(&LIMPEZA_LISTA, MEMORIA);
}
void cad_bebida(){
   fflush(stdin);

   printf("DIGITE A SUBCATEGORIA\n");
   fgets(MEMORIA.subcategoria,24,stdin);
   fflush(stdin);

   printf("DIGITE O NOME\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE A LOCALIZACAO\n");
   fgets(MEMORIA.localizacao,19, stdin);
   fflush(stdin);

   printf("DIGITE A VALIDADE - ANO\n");
   scanf("%d", &MEMORIA.validadeAno);
   fflush(stdin);

   printf("DIGITE A VALIDADE - MES\n");
   scanf("%d", &MEMORIA.validadeMes);

   printf("DIGITE A VALIDADE - DIA\n");
   scanf("%d", &MEMORIA.validadeDia);
   fflush(stdin);

   printf("DIGITE A QUANTIDADE\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O TIPO DE DEMANDA\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O NOME DO FORNECEDOR\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("\n\nDADOS RELATIVOS A ENTREGA DO PRODUTO\n\n");
   printf("DIGITE O DIA DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaDia);
   fflush(stdin);

   printf("DIGITE O MES DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaMes);
   fflush(stdin);

   printf("DIGITE O ANO DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaAno);
   fflush(stdin);

   INSERE(&BEBIDA_LISTA, MEMORIA);
   menu();
break;
}

void cad_beleza(){

   fflush(stdin);

   printf("DIGITE A SUBCATEGORIA\n");
   fgets(MEMORIA.subcategoria,24,stdin);
   fflush(stdin);

   printf("DIGITE O NOME\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE A LOCALIZACAO\n");
   fgets(MEMORIA.localizacao,19, stdin);
   fflush(stdin);

   printf("DIGITE A VALIDADE - ANO\n");
   scanf("%d", &MEMORIA.validadeAno);
   fflush(stdin);

   printf("DIGITE A VALIDADE - MES\n");
   scanf("%d", &MEMORIA.validadeMes);
   fflush(stdin);

   printf("DIGITE A VALIDADE - DIA\n");
   scanf("%d", &MEMORIA.validadeDia);
   fflush(stdin);

   printf("DIGITE A QUANTIDADE\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O TIPO DE DEMANDA\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O NOME DO FORNECEDOR\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("\n\nDADOS RELATIVOS A ENTREGA DO PRODUTO\n\n");
   printf("DIGITE O DIA DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaDia);
   fflush(stdin);

   printf("DIGITE O MES DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaMes);
   fflush(stdin);

   printf("DIGITE O ANO DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaAno);
   fflush(stdin);

   INSERE(&BELEZA_LISTA, MEMORIA);
   menu();
}

void cad_saude(){
   fflush(stdin);

   printf("DIGITE A SUBCATEGORIA\n");
   fgets(MEMORIA.subcategoria,24,stdin);
   fflush(stdin);

   printf("DIGITE O NOME\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE A LOCALIZACAO\n");
   fgets(MEMORIA.localizacao,19, stdin);
   fflush(stdin);

   printf("DIGITE A VALIDADE - ANO\n");
   scanf("%d", &MEMORIA.validadeAno);
   fflush(stdin);

   printf("DIGITE A VALIDADE - MES\n");
   scanf("%d", &MEMORIA.validadeMes);
   fflush(stdin);

   printf("DIGITE A VALIDADE - DIA\n");
   scanf("%d", &MEMORIA.validadeDia);
   fflush(stdin);

   printf("DIGITE A QUANTIDADE\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O TIPO DE DEMANDA\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O NOME DO FORNECEDOR\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("\n\nDADOS RELATIVOS A ENTREGA DO PRODUTO\n\n");
   printf("DIGITE O DIA DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaDia);
   fflush(stdin);

   printf("DIGITE O MES DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaMes);
   fflush(stdin);

   printf("DIGITE O ANO DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaAno);
   fflush(stdin);

   INSERE(&SAUDE_LISTA, MEMORIA);
   menu();
}
void cad_higiene(){
  fflush(stdin);

   printf("DIGITE A SUBCATEGORIA\n");
   fgets(MEMORIA.subcategoria,24,stdin);
   fflush(stdin);

   printf("DIGITE O NOME\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE A LOCALIZACAO\n");
   fgets(MEMORIA.localizacao,19, stdin);
   fflush(stdin);

   printf("DIGITE A VALIDADE - ANO\n");
   scanf("%d", &MEMORIA.validadeAno);
   fflush(stdin);

   printf("DIGITE A VALIDADE - MES\n");
   scanf("%d", &MEMORIA.validadeMes);
   fflush(stdin);

   printf("DIGITE A VALIDADE - DIA\n");
   scanf("%d", &MEMORIA.validadeDia);
   fflush(stdin);

   printf("DIGITE A QUANTIDADE\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O TIPO DE DEMANDA\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O NOME DO FORNECEDOR\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("\n\nDADOS RELATIVOS A ENTREGA DO PRODUTO\n\n");
   printf("DIGITE O DIA DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaDia);
   fflush(stdin);

   printf("DIGITE O MES DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaMes);
   fflush(stdin);

   printf("DIGITE O ANO DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaAno);
   fflush(stdin);

   INSERE(&HIGIENE_LISTA, MEMORIA);
   menu();
}

void cad_alimento(){
  fflush(stdin);

   printf("DIGITE A SUBCATEGORIA\n");
   fgets(MEMORIA.subcategoria,24,stdin);
   fflush(stdin);

   printf("DIGITE O NOME\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE A LOCALIZACAO\n");
   fgets(MEMORIA.localizacao,19, stdin);
   fflush(stdin);

   printf("DIGITE A VALIDADE - ANO\n");
   scanf("%d", &MEMORIA.validadeAno);
   fflush(stdin);

   printf("DIGITE A VALIDADE - MES\n");
   scanf("%d", &MEMORIA.validadeMes);
   fflush(stdin);

   printf("DIGITE A VALIDADE - DIA\n");
   scanf("%d", &MEMORIA.validadeDia);
   fflush(stdin);

   printf("DIGITE A QUANTIDADE\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O TIPO DE DEMANDA\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("DIGITE O NOME DO FORNECEDOR\n");
   fgets(MEMORIA.nome,19, stdin);
   fflush(stdin);

   printf("\n\nDADOS RELATIVOS A ENTREGA DO PRODUTO\n\n");
   printf("DIGITE O DIA DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaDia);
   fflush(stdin);

   printf("DIGITE O MES DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaMes);
   fflush(stdin);

   printf("DIGITE O ANO DE CHEGADA\n");
   scanf("%d",&MEMORIA.chegadaAno);
   fflush(stdin);


   INSERE(&ALIMENTO_LISTA, MEMORIA);
   menu();
}
void cons_itens_full(){

  printf("\n\n\n");
  printf("LISTA DE ITENS DE LIMPEZA");
  printf("\n\n\n");

   A=RAIZ->LIMPEZA;
   L = A->CATEGORIA;
   IMPRIME_LISTA(L);
   menu();
}
void cons_bebida(){
  printf("\n\n\n");
  printf("LISTA DE ITENS DE BEBIDA");
  printf("\n\n\n");
  A=RAIZ->BEBIDA;
  L = A->CATEGORIA;
  IMPRIME_LISTA(L);
  menu();
}
void cons_beleza(){
  printf("\n\n\n");
  printf("LISTA DE ITENS DE BELEZA");
  printf("\n\n\n");
  A=RAIZ->BELEZA;
  L = A->CATEGORIA;
  IMPRIME_LISTA(L);
  menu();

}
void cons_saude(){

  printf("\n\n\n");
  printf("LISTA DE ITENS DE SAUDE");
  printf("\n\n\n");

  A=RAIZ->SAUDE;
  L = A->CATEGORIA;
  IMPRIME_LISTA(L);
  menu();
}
void cons_higiene(){
  printf("\n\n\n");
  printf("LISTA DE ITENS DE HIGIENE");
  printf("\n\n\n");
   A=RAIZ->HIGIENE;
  L = A->CATEGORIA;
  IMPRIME_LISTA(L);
  menu();
}
void cons_alimento(){
  printf("\n\n\n");
  printf("LISTA DE ITENS DE ALIMENTO");
  printf("\n\n\n");

  A=RAIZ->ALIMENTOS;
  L = A->CATEGORIA;
  IMPRIME_LISTA(L);
  menu();
}
void default_(){
printf("\n\n\n");
 printf("voce selecionou uma opcao invalida");
 menu();
}

void menu(){
printf("\t\t\tBEM VINDO AO SISTEMA DE CONTROLE DE ESTOQUE\n");
printf("\t\t\n AQUI VOCE PODE ESCOLHER SUAS OPCOES\n\n");
char op;

printf("\t\t\n1 - PARA CADASTRAR PRODUTO");
printf("\t\t\n2 - PARA CONSULTAR POR CATEGORIA");
printf("\t\t\n3 - PARA EXCLUIR PRODUTO");
printf("\n");

op = getchar();


switch (op){

   case '1':

       menu_cadastro();
       break;

   case '2':

       menu_categoria();
       break;

   case '3':

      menu();
      break;

   default:

      default_();
      break;
   }


}

menu_cadastro(){

    fflush(stdin);
    char op_cat;

    printf("1 - PARA INCLUIR ITEM DE LIMPEZA\n");
    printf("2 - INCLUIR ITEM DE BEBIDA\n");
    printf("3 - INCLUIR ITEM DE BELEZA\n");
    printf("4 - INCLUIR ITEM DE SAUDE\n");
    printf("5 - INCLUIR ITEM DE HIGIENE\n");
    printf("6 - INCLUIR ITEM DE ALIMENTO\n");

    scanf("%c", &op_cat);
    fflush(stdin);
    switch (op_cat){
case '1':

   cad_limpeza();
   menu();
   break;

case '2':
   cad_bebida();
   break;

case '3':
      cad_beleza();
   break;

case '4':
      cad_saude();
      break;

case '5':
    cad_higiene();
    break;

case '6':
    cad_alimento();
    break;

default:

default_();

}
}


void menu_categoria(){

   fflush(stdin);
   ARVORE *A;
   LISTA *L;

   char op;

    printf("0 - CONSULTAR TODOS OS ITENS\n");
    printf("1 - CONSULTAR ITENS DE LIMPEZA\n");
    printf("2 - CONSULTAR ITENS DE BEBIDA\n");
    printf("3 - CONSULTAR ITENS DE BELEZA\n");
    printf("4 - CONSULTAR ITENS DE SAUDE\n");
    printf("5 - CONSULTAR ITENS DE HIGIENE\n");
    printf("6 - CONSULTAR ITENS DE ALIMENTO\n");
    printf("\n\n\n");

    scanf("%c", &op);

switch (op){

   case '0':

      cons_itens_full();
      break;

   case '1':

      cons_limpeza();
      break;

   case '2':

      cons_bebida();
      break;

   case '3':

      cons_beleza();
      break;


   case '4':

      cons_saude();
      break;

   case '5':

      cons_higiene();
       break;

   case '6':
      cons_alimento();
       break;

   default:

      default_();
      break;

   }

}
