//PRA ALOCAR MEMORIA SEMPRE É NECESSARIO UM PONTEIRO PARA
//RECEBE-LA. VC CRIA ESSE PONTEIRO QUE APONTA PARA UMA ESTRUTUA
// QUE POSSUI UM CAMPO QTD E O VETOR DA LISTA EM SI.
#include <stdio.h>
#include <stdlib.h>
#include "ListaSequecial.h"

struct lista{
    int qtd;
    int no[MAX];
};
struct lista *cria_lista(){ //Função retorna um ponteiro do tipo struct lista
    struct lista *lst;   //Cria um ponteiro qualquer
    lst = (struct lista*) malloc(sizeof(struct lista)); //Aloca um espaço na memoria para esse ponteiro correspondente a struct lista
    if(lst != NULL)
        lst->qtd = 0;    //(*li).qtd = 0;
    return lst; //retorna o ponteiro
}

void libera_lista(struct lista *lst){
    free(lst);
}

int tamanho_lista(struct lista *lst){
    if(lst == NULL)
        return 0;
    else
        return lst->qtd;
}

int lista_vazia(struct lista *lst){
    if(lst->qtd == 0)
        return 1;
    if(lst == NULL || lst->qtd != 0)
        return 0;

}

int lista_cheia(struct lista *lst){
    if(lst->qtd == MAX)
        return 1;
    if(lst == NULL || lst->qtd != MAX)
        return 0;
}

int insere_lista_final(struct lista *lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    lst->no[lst->qtd] = elem;
    lst->qtd++;
    return 1;
}

int insere_lista_inicio(struct lista *lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    int i;
    for(i = lst->qtd-1; i>=0; i--){
        lst->no[i+1] = lst->no[i];
    }
    lst->no[0] = elem;;
    lst->qtd++;
    return 1;
}

int insere_lista_ordenada(struct lista *lst, int elem){
    if(lst == NULL || lista_cheia(lst) == 1)
        return 0;
    int k,i=0;
    while(i<lst->qtd && lst->no[i] < elem)
        i++;
    for(k=lst->qtd-1; k>=i; k--)
        lst->no[k+1] = lst->no[k];
    lst->no[i] = elem;
    lst->qtd++;
    return 1;
}

int remove_lista(struct lista *lst, int elem){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0;
    int i=0,k;
    while(i<lst->qtd && lst->no[i] != elem)
        i++;
    if(i == lst->qtd)
        return 0;
    for(k=i; k<lst->qtd; k++){
        lst->no[k] = lst->no[k+1];
    }
    lst->qtd--;
    return 1;

}

int remove_lista_final(struct lista *lst){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0;
    lst->qtd--;
    return 1;
}

int remove_lista_inicio(struct lista *lst){
    if(lst == NULL || lista_vazia(lst) == 1)
        return 0;
    int i;
    for(i=0; i<=lst->qtd-1; i++)
        lst->no[i] = lst->no[i+1];
    lst->qtd--;
    return 1;
}

void imprime_lista(struct lista *lst){
    if(lst == NULL)
        return 0;
    int i;
    for(i=0; i< lst->qtd; i++)
        printf(" %d ",lst->no[i]);
}


void menu(){
printf("\nENTRE COM A APCAO QUE DESEJA\n");
printf("----------------------------\n");
printf("Digite 1 para inserir um elemento no final da lista\n");
printf("Digite 2 para inserir um elemento no inicio da lista\n");
printf("Digite 3 para inserir um elemento em uma lista ordenada\n");
printf("Digite 4 para remover o ultimo elemento\n");
printf("Digite 5 para remover o primeiro elemento\n");
printf("Digite 6 para remover o elemento que desejar\n");
printf("Digite 7 para imprimir a lista\n");
printf("Digite 0 para encerrar o programa\n");
}




































































