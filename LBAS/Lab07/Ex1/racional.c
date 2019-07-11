#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

struct no{
    int info;
    struct no *prox;
};

Lista inicializar_lista(){
    return NULL;
}

int lista_vazia(Lista lst){
    if(lst == NULL)
        return 1;
    else
        return 0;
}

int insere_final(Lista *lst, int elem){
    Lista N = (Lista)malloc(sizeof(struct no));
    if(N == NULL){
        return 0;
    }
    N->info = elem;

    if(*lst == NULL){
        N->prox = N;
        *lst = N;
        return 1;
    }
    else{
        N->prox = (*lst)->prox;
        (*lst)->prox = N;
        *lst = N;
        return 1;
    }
}

int remove_inicio(Lista *lst, int *elem){
    if(lista_vazia(*lst) == 1)
        return 0;

    Lista aux = (*lst)->prox;
    *elem = aux->info;

    if((*lst)->prox == *lst)
        *lst = NULL;
    else
        (*lst)->prox = aux->prox;
    free(aux);
    return 1;
}

int imprime_lista(Lista lst){
    if(lista_vazia(lst) == 1){
        printf("*LISTA VAZIA*");
        return 0;
    }
    else{
        Lista aux = lst->prox;
        while(aux->prox != lst->prox){
            printf("%d, ", aux->info);
            aux = aux->prox;
        }
    printf("%d.\n", aux->info);
    }
    return 1;
}

int tamanho(Lista lst){
    Lista aux = lst->prox;
    int t = 1;

    if(lista_vazia(lst) == 1){
        printf("*LISTA VAZIA*");
    }
    else{
    while(aux->prox != lst->prox){
        aux = aux->prox;
        t++;
    }
    printf("Tamanho: %d", t);
    }
    return 1;
}






