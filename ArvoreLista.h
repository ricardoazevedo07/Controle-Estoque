      #include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct lista{
int info;

char subcategoria[25];
char nome[20];
char localizacao[20];

int validadeDia;
int validadeMes;
int validadeAno;

int chegadaDia;
int chegadaMes;
int chegadaAno;

int quantidade;

char tipoDemanda[10];
char fornecedor[20];

float preco;

struct lista *prox;
};
typedef struct lista LISTA;

LISTA* CRIA_LISTA(void){
return NULL;
}


LISTA *INSERE(LISTA *L, LISTA P){

LISTA *NOVA = (LISTA*) malloc(sizeof(LISTA));

NOVA->validadeDia = P.validadeDia;
NOVA->validadeAno = P.validadeAno;
NOVA->validadeMes = P.validadeMes;

NOVA->chegadaAno = P.chegadaAno;
NOVA->chegadaMes = P.chegadaMes;
NOVA->chegadaDia = P.chegadaDia;

NOVA->quantidade = P.quantidade;
NOVA->preco = P.preco;

strcmp(NOVA->subcategoria,P.subcategoria);
strcmp(NOVA->nome,P.nome);
strcmp(NOVA->localizacao,P.localizacao);
strcmp(NOVA->tipoDemanda, P.tipoDemanda);
strcmp(NOVA->fornecedor, P.fornecedor);


NOVA->prox = L;
 return NOVA;

}

int VAZIA(LISTA *L){
if(L==NULL){
return 1;
 } else {
return 0;
}

}



LISTA *BUSCA(LISTA *L, int b){
LISTA *AUX;

AUX = L;
for(AUX=L;AUX!=NULL;AUX= AUX->prox){
if(AUX->info==b){
return AUX;
               }
}
return NULL;

}




int IMPRIME_LISTA(LISTA *L){
LISTA *AUX;
AUX=L;
if(AUX==NULL){
    printf("LISTA VAZIA");
    return;
}else{
   while(AUX!=NULL){
    //ponha as quebras de linha
printf("\n\n  NOME %s\n\n", AUX->nome);
printf("\n\n SUBCATEGORIA %s \n\n", AUX->subcategoria);
printf("\n\n%s  LOCALIZACAO\n\n", AUX->localizacao);
printf("\n\n%s  TIPO DE DEMANDA\n\n", AUX->tipoDemanda);
printf("\n\n%s  FORNECEDOR\n\n", AUX->fornecedor);
printf("\n\nDados de Chegada\n\n");
printf("\n\nDIA %d\n\n", AUX->chegadaDia);
printf("\n\nMES %d\n\n", AUX->chegadaMes);
printf("\n\nANO %d\n\n", AUX->chegadaAno);
printf("\n\nDados de Validade do Produto\n\n");
printf("\n\nDIA %d\n\n", AUX->validadeDia);
printf("\n\nMES %d\n\n", AUX->validadeMes);
printf("\n\nANO %d\n\n", AUX->validadeAno);


    AUX= AUX->prox;
   }

     }
}




int REMOVE(LISTA *L, int b){
  LISTA *BUSCADOR, *AUX, *ANTE;
for(AUX=L;AUX!=NULL;ANTE = AUX, AUX= AUX->prox){
if(AUX->info==b){
ANTE=AUX->prox;
free(AUX);
printf("removido");
               }
}


}




// funções de arvore





typedef struct {
char info;
int chave;
LISTA *CATEGORIA;
struct arvore *LIMPEZA;
struct arvore *ALIMENTOS;
struct arvore *HIGIENE;
struct arvore *SAUDE;
struct arvore *BELEZA;
struct arvore *BEBIDA;

}ARVORE;
// FUNÇÃO DE CRIAÇÃO DE NÓ VAZIO
ARVORE* cria_vazia (void){
return NULL;
}
//FUNÇÃO DE CRIAÇÃO DE NOS DE ARVORES
ARVORE* cria(ARVORE *LIMPEZA1, ARVORE *BEBIDA1, ARVORE* BELEZA1, ARVORE*SAUDE1, ARVORE *HIGIENE1, ARVORE *ALIMENTOS1){
ARVORE *P = (ARVORE*)malloc(sizeof(ARVORE));

P->LIMPEZA = LIMPEZA1;


P->BEBIDA = BEBIDA1;


P->BELEZA = BELEZA1;


P->SAUDE = SAUDE1;


P->HIGIENE = HIGIENE1;


P->ALIMENTOS = ALIMENTOS1;



return P;

}

//VERIFICA SE ARVORE ESTÁ VAZIA
int vazia(ARVORE *A){
if(A==NULL){

    return 1;
}else{
    return 0;
}

}

//IMPRESSÃO DA ARVORE
void imprime(ARVORE *A){

if(!vazia(A)){




}

}
//LIBERA TODOS OS NÓS. NÃO SERÁ USADA
void libera(ARVORE *A){
if(!vazia(A)){


}
}

