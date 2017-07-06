#include <stdlib.h>
#include <stdio.h>
#include <string.h>


#include "ArvoreLista.h"

void menu();
void menu_categoria();
void PASSAGEM(LISTA *, char);
LISTA * PASSAGEM_EXTERNA(LISTA *, char);
char ch_Ext;
LISTA MEMORIA;


LISTA *PASSAGEM_EXTERNA(LISTA *MEM_EXT, char opExt){
return MEM_EXT;
}





int main()
{
    menu();
    //"AS INSERÇÕES ABAIXO APENAS VALIDAM AS ESTRUTURAS E FUNÇÕES CRIADAS ACIMA
    ARVORE *LIMP = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    LIMP->CATEGORIA =CRIA_LISTA();
    ARVORE *BEBI = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    BEBI->CATEGORIA =CRIA_LISTA();

    ARVORE *BELE = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    BELE->CATEGORIA =CRIA_LISTA();

    ARVORE *SAUD = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    SAUD->CATEGORIA =CRIA_LISTA();

    ARVORE *HIGI = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    HIGI->CATEGORIA =CRIA_LISTA();

    ARVORE *ALIM = cria(cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia(),cria_vazia());
    ALIM->CATEGORIA =CRIA_LISTA();



    ARVORE *RAIZ = cria(LIMP,BEBI,BELE,SAUD,HIGI,ALIM);

void PASSAGEM(LISTA *MEM, char ch){
ARVORE *RAMO_ALIMENTO = RAIZ->ALIMENTOS;
ARVORE *RAMO_HIGIENE = RAIZ->HIGIENE;
ARVORE *RAMO_SAUDE = RAIZ->SAUDE;
ARVORE *RAMO_BELEZA = RAIZ->BELEZA;
ARVORE *RAMO_BEBIDA = RAIZ->BEBIDA;
ARVORE *RAMO_LIMPEZA = RAIZ->LIMPEZA;

LISTA *ALIMENTOS_LISTA = RAMO_ALIMENTO->CATEGORIA;
LISTA *HIGIENE_LISTA = RAMO_HIGIENE->CATEGORIA;
LISTA *SAUDE_LISTA = RAMO_SAUDE->CATEGORIA;
LISTA *BELEZA_LISTA = RAMO_BELEZA->CATEGORIA;
LISTA *BEBIDA_LISTA = RAMO_BEBIDA->CATEGORIA;
LISTA *LIMPEZA_LISTA = RAMO_LIMPEZA->CATEGORIA;

switch(ch){
case '1':
    printf("limpeza");
    strcmp(LIMPEZA_LISTA->nome,MEM->nome);
    strcmp(LIMPEZA_LISTA->subcategoria,MEM->subcategoria);
    strcmp(LIMPEZA_LISTA->validadeAno,MEM->validadeAno);
    strcmp(LIMPEZA_LISTA->validadeDia,MEM->validadeDia);
    strcmp(LIMPEZA_LISTA->validadeMes,MEM->validadeMes);
    strcmp(LIMPEZA_LISTA->chegadaAno,MEM->chegadaAno);
    strcmp(LIMPEZA_LISTA->chegadaDia,MEM->chegadaDia);
    strcmp(LIMPEZA_LISTA->chegadaMes,MEM->chegadaMes);
    strcmp(LIMPEZA_LISTA->fornecedor,MEM->fornecedor);
    strcmp(LIMPEZA_LISTA->tipoDemanda,MEM->tipoDemanda);

    LIMPEZA_LISTA->preco = MEM->preco;
     LIMPEZA_LISTA->quantidade = MEM->quantidade;

    //LIMPEZA_LISTA->nome = MEM->nome;
    break;
case '2':

    printf("BEBIDA");
    strcmp(BEBIDA_LISTA->nome,MEM->nome);
    strcmp(BEBIDA_LISTA->subcategoria,MEM->subcategoria);
    strcmp(BEBIDA_LISTA->validadeAno,MEM->validadeAno);
    strcmp(BEBIDA_LISTA->validadeDia,MEM->validadeDia);
    strcmp(BEBIDA_LISTA->validadeMes,MEM->validadeMes);
    strcmp(BEBIDA_LISTA->chegadaAno,MEM->chegadaAno);
    strcmp(BEBIDA_LISTA->chegadaDia,MEM->chegadaDia);
    strcmp(BEBIDA_LISTA->chegadaMes,MEM->chegadaMes);
    strcmp(BEBIDA_LISTA->fornecedor,MEM->fornecedor);
    strcmp(BEBIDA_LISTA->tipoDemanda,MEM->tipoDemanda);

    BEBIDA_LISTA->preco = MEM->preco;
     BEBIDA_LISTA->quantidade = MEM->quantidade;

    break;
case '3':

    printf("BELEZA");
    strcmp(BELEZA_LISTA->nome,MEM->nome);
    strcmp(BELEZA_LISTA->subcategoria,MEM->subcategoria);
    strcmp(BELEZA_LISTA->validadeAno,MEM->validadeAno);
    strcmp(BELEZA_LISTA->validadeDia,MEM->validadeDia);
    strcmp(BELEZA_LISTA->validadeMes,MEM->validadeMes);
    strcmp(BELEZA_LISTA->chegadaAno,MEM->chegadaAno);
    strcmp(BELEZA_LISTA->chegadaDia,MEM->chegadaDia);
    strcmp(BELEZA_LISTA->chegadaMes,MEM->chegadaMes);
    strcmp(BELEZA_LISTA->fornecedor,MEM->fornecedor);
    strcmp(BELEZA_LISTA->tipoDemanda,MEM->tipoDemanda);

    BELEZA_LISTA->preco = MEM->preco;
     BELEZA_LISTA->quantidade = MEM->quantidade;



    break;
case '4':
    printf("SAUDE");
    strcmp(SAUDE_LISTA->nome,MEM->nome);
    strcmp(SAUDE_LISTA->subcategoria,MEM->subcategoria);
    strcmp(SAUDE_LISTA->validadeAno,MEM->validadeAno);
    strcmp(SAUDE_LISTA->validadeDia,MEM->validadeDia);
    strcmp(SAUDE_LISTA->validadeMes,MEM->validadeMes);
    strcmp(SAUDE_LISTA->chegadaAno,MEM->chegadaAno);
    strcmp(SAUDE_LISTA->chegadaDia,MEM->chegadaDia);
    strcmp(SAUDE_LISTA->chegadaMes,MEM->chegadaMes);
    strcmp(SAUDE_LISTA->fornecedor,MEM->fornecedor);
    strcmp(SAUDE_LISTA->tipoDemanda,MEM->tipoDemanda);

    SAUDE_LISTA->preco = MEM->preco;
     SAUDE_LISTA->quantidade = MEM->quantidade;

    break;
case '5':

    printf("HIGIENE");
    strcmp(HIGIENE_LISTA->nome,MEM->nome);
    strcmp(HIGIENE_LISTA->subcategoria,MEM->subcategoria);
    strcmp(HIGIENE_LISTA->validadeAno,MEM->validadeAno);
    strcmp(HIGIENE_LISTA->validadeDia,MEM->validadeDia);
    strcmp(HIGIENE_LISTA->validadeMes,MEM->validadeMes);
    strcmp(HIGIENE_LISTA->chegadaAno,MEM->chegadaAno);
    strcmp(HIGIENE_LISTA->chegadaDia,MEM->chegadaDia);
    strcmp(HIGIENE_LISTA->chegadaMes,MEM->chegadaMes);
    strcmp(HIGIENE_LISTA->fornecedor,MEM->fornecedor);
    strcmp(HIGIENE_LISTA->tipoDemanda,MEM->tipoDemanda);

    HIGIENE_LISTA->preco = MEM->preco;
     HIGIENE_LISTA->quantidade = MEM->quantidade;

    break;
case '6':
    printf("ALIMENTOS");
    strcmp(ALIMENTOS_LISTA->nome,MEM->nome);
    strcmp(ALIMENTOS_LISTA->subcategoria,MEM->subcategoria);
    strcmp(ALIMENTOS_LISTA->validadeAno,MEM->validadeAno);
    strcmp(ALIMENTOS_LISTA->validadeDia,MEM->validadeDia);
    strcmp(ALIMENTOS_LISTA->validadeMes,MEM->validadeMes);
    strcmp(ALIMENTOS_LISTA->chegadaAno,MEM->chegadaAno);
    strcmp(ALIMENTOS_LISTA->chegadaDia,MEM->chegadaDia);
    strcmp(ALIMENTOS_LISTA->chegadaMes,MEM->chegadaMes);
    strcmp(ALIMENTOS_LISTA->fornecedor,MEM->fornecedor);
    strcmp(ALIMENTOS_LISTA->tipoDemanda,MEM->tipoDemanda);

    ALIMENTOS_LISTA->preco = MEM->preco;
     ALIMENTOS_LISTA->quantidade = MEM->quantidade;


    break;

}

}
PASSAGEM(PASSAGEM_EXTERNA(&MEMORIA, '1'), '1');



    return 0;
}


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
    menu_categoria();
    break;
case '2':
    break;
case '3':
    break;

default:
   printf("voce selecionou uma opcao invalida");
   menu();
   break;

}

}

menu_categoria(){
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
    printf("DIGITE O NOME\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE A LOCALIZACAO\n");
    fgets(MEMORIA.localizacao,19, stdin);

    printf("DIGITE A VALIDADE - ANO\n");
    scanf("%d", &MEMORIA.validadeAno);

      printf("DIGITE A VALIDADE - MES\n");
     scanf("%d", &MEMORIA.validadeMes);

      printf("DIGITE A VALIDADE - DIA\n");
     scanf("%d", &MEMORIA.validadeDia);


    printf("DIGITE A QUANTIDADE\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O TIPO DE DEMANDA\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O NOME DO FORNECEDOR\n");
    fgets(MEMORIA.nome,19, stdin);


    PASSAGEM_EXTERNA(&MEMORIA, '1');
    break;
case '2':
    fflush(stdin);

    printf("DIGITE A SUBCATEGORIA\n");
    fgets(MEMORIA.subcategoria,24,stdin);
    printf("DIGITE O NOME\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE A LOCALIZACAO\n");
    fgets(MEMORIA.localizacao,19, stdin);

    printf("DIGITE A VALIDADE - ANO\n");
    scanf("%d", &MEMORIA.validadeAno);

      printf("DIGITE A VALIDADE - MES\n");
     scanf("%d", &MEMORIA.validadeMes);

      printf("DIGITE A VALIDADE - DIA\n");
     scanf("%d", &MEMORIA.validadeDia);


    printf("DIGITE A QUANTIDADE\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O TIPO DE DEMANDA\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O NOME DO FORNECEDOR\n");
    fgets(MEMORIA.nome,19, stdin);


    break;
case '3':
    fflush(stdin);

    printf("DIGITE A SUBCATEGORIA\n");
    fgets(MEMORIA.subcategoria,24,stdin);
    printf("DIGITE O NOME\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE A LOCALIZACAO\n");
    fgets(MEMORIA.localizacao,19, stdin);

    printf("DIGITE A VALIDADE - ANO\n");
    scanf("%d", &MEMORIA.validadeAno);

      printf("DIGITE A VALIDADE - MES\n");
     scanf("%d", &MEMORIA.validadeMes);

      printf("DIGITE A VALIDADE - DIA\n");
     scanf("%d", &MEMORIA.validadeDia);


    printf("DIGITE A QUANTIDADE\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O TIPO DE DEMANDA\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O NOME DO FORNECEDOR\n");
    fgets(MEMORIA.nome,19, stdin);
    break;
case '4':
    fflush(stdin);

    printf("DIGITE A SUBCATEGORIA\n");
    fgets(MEMORIA.subcategoria,24,stdin);
    printf("DIGITE O NOME\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE A LOCALIZACAO\n");
    fgets(MEMORIA.localizacao,19, stdin);

    printf("DIGITE A VALIDADE - ANO\n");
    scanf("%d", &MEMORIA.validadeAno);

      printf("DIGITE A VALIDADE - MES\n");
     scanf("%d", &MEMORIA.validadeMes);

      printf("DIGITE A VALIDADE - DIA\n");
     scanf("%d", &MEMORIA.validadeDia);


    printf("DIGITE A QUANTIDADE\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O TIPO DE DEMANDA\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O NOME DO FORNECEDOR\n");
    fgets(MEMORIA.nome,19, stdin);
    break;

case '5':
    fflush(stdin);

    printf("DIGITE A SUBCATEGORIA\n");
    fgets(MEMORIA.subcategoria,24,stdin);
    printf("DIGITE O NOME\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE A LOCALIZACAO\n");
    fgets(MEMORIA.localizacao,19, stdin);

    printf("DIGITE A VALIDADE - ANO\n");
    scanf("%d", &MEMORIA.validadeAno);

      printf("DIGITE A VALIDADE - MES\n");
     scanf("%d", &MEMORIA.validadeMes);

      printf("DIGITE A VALIDADE - DIA\n");
     scanf("%d", &MEMORIA.validadeDia);


    printf("DIGITE A QUANTIDADE\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O TIPO DE DEMANDA\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O NOME DO FORNECEDOR\n");
    fgets(MEMORIA.nome,19, stdin);
    break;

case '6':
    fflush(stdin);

    printf("DIGITE A SUBCATEGORIA\n");
    fgets(MEMORIA.subcategoria,24,stdin);
    printf("DIGITE O NOME\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE A LOCALIZACAO\n");
    fgets(MEMORIA.localizacao,19, stdin);

    printf("DIGITE A VALIDADE - ANO\n");
    scanf("%d", &MEMORIA.validadeAno);

      printf("DIGITE A VALIDADE - MES\n");
     scanf("%d", &MEMORIA.validadeMes);

      printf("DIGITE A VALIDADE - DIA\n");
     scanf("%d", &MEMORIA.validadeDia);


    printf("DIGITE A QUANTIDADE\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O TIPO DE DEMANDA\n");
    fgets(MEMORIA.nome,19, stdin);
    printf("DIGITE O NOME DO FORNECEDOR\n");
    fgets(MEMORIA.nome,19, stdin);
    break;
default:
   printf("voce selecionou uma opcao invalida");
   menu();
   break;

}


}


