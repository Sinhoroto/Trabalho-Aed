#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

struct no{
    int info;
    struct no *ant;
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

int insere_elem(Lista *lst, int elem) {
    Lista N = (Lista) malloc(sizeof(struct no));

    if (N == NULL) {
        return 0;
    }

    N->info = elem;
    N->ant = NULL;
    N->prox = *lst;

    if (lista_vazia(*lst) == 0)
        (*lst)->ant = N;

    *lst = N;
    return 1;
    }

int remove_elem(Lista *lst, int elem){
    if (lista_vazia(*lst) == 1)
        return 0;

    Lista aux = *lst;

    while (aux->prox != NULL && aux->info != elem)
        aux = aux->prox;

    if (aux->info != elem)
        return 0;

    if (aux->prox != NULL)
        (aux)->prox->ant = aux->ant;

    if (aux->ant != NULL)
        (aux)->ant->prox = aux->prox;

    if (aux == *lst)
        *lst = aux->prox;
    free(aux);
    return 1;
    }

int tamanho(Lista lst){
    if (lista_vazia(lst) == 1)
        return 0;

    Lista aux = lst;
    int t = 1;

    while (aux->prox != NULL){
        t++;
        aux = aux->prox;
    }
    printf("Tamanho: %d\n", t);
    return 1;
    }

int imprime_lista(Lista lst){
    if (lista_vazia(lst) == 1)
        return 0;

    int t = 0;

    while (lst->prox != NULL){
        printf("%d,  ", lst->info);
        lst = lst->prox;
    }
    printf("%d.\n", lst->info);
    return 1;
    }

