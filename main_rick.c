#include <stdio.h>
#include <stdlib.h>

typedef struct arvore ARVORE;

struct produto{
int valor;
};

struct arvore{
char info;
int chave;
struct arvore *ESQ;
struct arvore *DIR;
};
// FUNÇÃO DE CRIAÇÃO DE NÓ VAZIO
ARVORE* cria_vazia (void){
return NULL;
}
//FUNÇÃO DE CRIAÇÃO DE NOS DE ARVORES
ARVORE* cria(char inf, ARVORE* SAE, ARVORE* SAD){
ARVORE *P = (ARVORE*)malloc(sizeof(ARVORE));
P->info=inf;
P->ESQ = SAE;
P->DIR = SAD;
return P;

}

//VERIFICA SE ARVORE ESTÁ VAZIA
int vazia(ARVORE *A){
return A==NULL;
}

//IMPRESSÃO DA ARVORE
void imprime(ARVORE *A){

if(!vazia(A)){

printf("%c",A->info);

imprime(A->ESQ);

imprime(A->DIR);


}

}
//LIBERA TODOS OS NÓS. NÃO SERÁ USADA
void libera(ARVORE *A){
if(!vazia(A)){
libera(A->ESQ);
libera(A->DIR);
free(A);
}
}

//INSERE NO NÓ VAZIO MAIS PROXIMO. VALOR SERÁ SUBSTITUIDO PELA STRUCT
ARVORE* INSERÇÃO(ARVORE *P, int valor){

if(P->ESQ==NULL){
ARVORE P->ESQ = (ARVORE*)malloc(sizeof(ARVORE));
P->ESQ->chave = VALOR;
return P;
} else if(P->DIR==NULL){
ARVORE P->DIR = (ARVORE*)malloc(sizeof(ARVORE));
P->DIR->chave = VALOR;
return P;
}

while(P->ESQ!=NULL || P->DIR!=NULL){
 return INSERÇÃO(P->DIR), INSERÇÃO(P->ESQ);
}


}


int main()
{
    printf("AS INSERÇÕES ABAIXO APENAS VALIDAM AS ESTRUTURAS E FUNÇÕES CRIADAS ACIMA\n");

ARVORE* a1 = cria('A',cria_vazia(),cria_vazia());
ARVORE* a2 = cria('b',cria_vazia(),cria_vazia());
ARVORE* a3 = cria('c',cria_vazia(),cria_vazia());
ARVORE* a4 = cria('d',a2,a1);
ARVORE* a5 = cria('e',a4,a3);

imprime(a5);
printf("\n\n\n\n");
libera(a5);
printf("\n\n\n\n");
imprime(a5);
printf("\n\n\n\n");

    return 0;
}


