#include <stdio.h>
#include <stdlib.h>
#include "ListaSequecial.h"

int main()
{
    struct lista *lst;
    lst = cria_lista();
    int opcao,elem;
    while(opcao != 0){
        menu();
        scanf("%d",&opcao);
        switch(opcao){
            case 1:
                printf("Digite o elemento que deseja inserir no final da lista\n");
                scanf("%d",&elem);
                insere_lista_final(lst,elem);
                break;
            case 2:
                printf("Digite o elemento que deseja inserir no inicio da lista\n");
                scanf("%d",&elem);
                insere_lista_inicio(lst,elem);
                break;
            case 3:
                printf("Digite o elemento que deseja inserir em uma lista ordenada\n");
                scanf("%d",&elem);
                insere_lista_ordenada(lst,elem);
                break;
            case 4:
                remove_lista_final(lst);
                printf("\nO ultimo elemento foi removido");
                break;
            case 5:
                remove_lista_inicio(lst);
                printf("\nO primeiro elemento foi removido");
                break;
            case 6:
                printf("Digite o elemento que deseja remover da lista\n");
                scanf("%d",&elem);
                remove_lista(lst,elem);
                break;
            case 7:
                printf("A lista eh:\n");
                imprime_lista(lst);
                break;
            case 0:
                system("cls");
                exit(0);

        }
    }

    return 0;
}
