
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

void menu(){
printf("\t\t\tBEM VINDO AO SISTEMA DE CONTROLE DE ESTOQUE\n");
printf("\t\t\n AQUI VOCE PODE ESCOLHER SUAS OPCOES\n\n");
char op;

printf("\t\t\nDIGITE 1 PARA CADASTRAR PRODUTO");
printf("\t\t\nDIGITE 2 PARA CONSULTAR POR CATEGORIA");
printf("\t\t\nDIGITE 3 PARA EXCLUIR PRODUTO");
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
    break;

default:
   printf("voce selecionou uma opcao invalida");
   menu();
   break;

}

}

menu_cadastro(){
    fflush(stdin);
    char op_cat;


    printf("\nDIGITE 1 PARA INCLUIR ITEM DE LIMPEZA\n");
    printf("DIGITE 2 PARA INCLUIR ITEM DE BEBIDA\n");
    printf("DIGITE 3 PARA INCLUIR ITEM DE BELEZA\n");
    printf("DIGITE 4 PARA INCLUIR ITEM DE SAUDE\n");
    printf("DIGITE 5 PARA INCLUIR ITEM DE HIGIENE\n");
    printf("DIGITE 6 PARA INCLUIR ITEM DE ALIMENTO\n");

    scanf("%c", &op_cat);
    fflush(stdin);
    switch (op_cat){
case '1':
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



    menu();
break;

case '2':
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

case '3':
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
break;

case '4':
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
break;

case '5':
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
break;

case '6':
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

break;
default:
   printf("voce selecionou uma opcao invalida");
   menu();
   break;

}
}


void menu_categoria(){
fflush(stdin);
ARVORE *A;
LISTA *L;
char op;
    printf("DIGITE 0 PARA CONSULTAR TODOS OS ITENS\n");
    printf("DIGITE 1 PARA CONSULTAR ITENS DE LIMPEZA\n");
    printf("DIGITE 2 PARA CONSULTAR ITENS DE BEBIDA\n");
    printf("DIGITE 3 PARA CONSULTAR ITENS DE BELEZA\n");
    printf("DIGITE 4 PARA CONSULTAR ITENS DE SAUDE\n");
    printf("DIGITE 5 PARA CONSULTAR ITENS DE HIGIENE\n");
    printf("DIGITE 6 PARA CONSULTAR ITENS DE ALIMENTO\n");
    printf("\n\n\n");

scanf("%c", &op);

switch (op){
case '1':



    printf("\n\n\n");
    printf("LISTA DE ITENS DE LIMPEZA");
    printf("\n\n\n");

    A=RAIZ->LIMPEZA;
    L = A->CATEGORIA;
    IMPRIME_LISTA(L);

    menu();
    break;

case '2':


    printf("\n\n\n");
    printf("LISTA DE ITENS DE BEBIDA");
    printf("\n\n\n");

    A=RAIZ->BEBIDA;
    L = A->CATEGORIA;
    IMPRIME_LISTA(L);

    menu();
    break;

case '3':
    printf("\n\n\n");
    printf("LISTA DE ITENS DE BELEZA");
    printf("\n\n\n");

    A=RAIZ->BELEZA;
    L = A->CATEGORIA;
    IMPRIME_LISTA(L);

    menu();
    break;

case '4':
    printf("\n\n\n");
    printf("LISTA DE ITENS DE SAUDE");
    printf("\n\n\n");

     A=RAIZ->SAUDE;
    L = A->CATEGORIA;
    IMPRIME_LISTA(L);

    menu();
    break;

case '5':
    printf("\n\n\n");
    printf("LISTA DE ITENS DE HIGIENE");
    printf("\n\n\n");

     A=RAIZ->HIGIENE;
    L = A->CATEGORIA;
    IMPRIME_LISTA(L);

    menu();
    break;

case '6':
    printf("\n\n\n");
    printf("LISTA DE ITENS DE ALIMENTO");
    printf("\n\n\n");

    A=RAIZ->ALIMENTOS;
    L = A->CATEGORIA;
    IMPRIME_LISTA(L);

    menu();
    break;

default:
    printf("\n\n\n");
   printf("voce selecionou uma opcao invalida");
   menu();
   break;

}

}
