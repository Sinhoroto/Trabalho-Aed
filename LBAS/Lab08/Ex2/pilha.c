#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct no {
    int info;
    struct no* prox;
};

Pilha cria_pilha () {
    return NULL;
}

int pilha_vazia (Pilha p) {
    if (p == NULL)
        return 1;
    else
        return 0;
}

int push (Pilha *p, int elem) {
    Pilha N = (Pilha) malloc(sizeof(struct no));

    if (N == NULL)
        return 0;

    N->info = elem;
    N->prox = *p;
    *p = N;

    return 1;
}

int pop (Pilha *p, int *elem) {
    if (pilha_vazia(*p) == 1)
        return 0;

    Pilha aux = *p;
    *elem = aux->info;
    *p = aux->prox;
    free(aux);

    return 1;
}

int le_topo (Pilha *p, int *elem) {
    if (pilha_vazia(*p) == 1)
        return 0;

    *elem = (*p)->info;

    return 1;
}

int imprimir(Pilha p){
    if (pilha_vazia(p) == 1)
        return 0;
    printf("\n");
    while(p->prox != NULL){
        printf("%d, ", p->info);
        p = p->prox;
        if(p->prox == NULL)
            printf("%d, ", p->info);
    }
    printf("\n");
}
