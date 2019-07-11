#include <stdio.h>
#include <stdlib.h>

#include "header9.h"

#define max 20
//Cria estrutura
struct pilha{
    int vetor[max];
    int topo;
};

Pilha cria_pilha(){
    Pilha p;
    p = (Pilha) malloc(sizeof(struct pilha));

    if(p != NULL){
        p->topo = -1;
    }
    return p;
}

int pilha_vazia(Pilha p){
    if(p->topo == -1){
        return 1;
    }else{
        return 0;
    }
}

int pilha_cheia(Pilha p){
    if(p->topo == max-1){
        return 1;
    }else{
        return 0;
    }
}

int push(Pilha p, int elem){
    if(p == NULL || pilha_cheia(p) == 1){
        return 0;
    }
    p->topo++;

    p->vetor[p->topo] = elem;
    return 1;
}

int pop(Pilha p, int *elem){
    if(p == NULL || pilha_vazia(p) == 1){
        return 0;
    }
    *elem = p->vetor[p->topo];
    p->topo--;
    return 1;
}


int converte_dec_bin(int deci){
    int x = deci;
    Pilha *p;
    p = cria_pilha();

    printf(x);
    while(x != 0 || pilha_cheia(p) == 0){

        int result = x/2;
        int resto = x%2;

        x = result;
        pop(&p, resto);
    }

    if(pilha_cheia(p) == 1){
        printf("Lista cheia");
    }else{

        while(pilha_vazia(p) == 0){
            int *r;
            pop(&p, &r);
            printf(r);
        }
    }

}
