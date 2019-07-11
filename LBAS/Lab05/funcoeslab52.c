#include <stdio.h>
#include <stdlib.h>
#include "headerlab52.h"
#define MAX 10
//EX 2

struct lista{
    int vet[MAX];
    int Fim;
};

Lista cria_lista(){
    Lista lst;
    lst=(Lista)malloc(sizeof(struct lista));
     if(lst!=NULL)
        lst->Fim=0;
    return lst;
}

int lista_vazia(Lista lst){
    if(lst->Fim==0)
        return 1;
    else
        return 0;
}

int lista_cheia(Lista lst){
    if(lst->Fim==MAX)
        return 1;
    else
        return 0;
}

int insere_ord(Lista lst, int elem){
    if(lst==NULL||lista_cheia(lst)==1)
        return 0;
    if(lista_vazia(lst)==1||elem>=lst->vet[lst->Fim-1]){
        lst->vet[lst->Fim]=elem;
    }
    else{
        int i, aux=0;
        while(elem>=lst->vet[aux])
            aux++;
        for(i=lst->Fim;i>aux;i--)
            lst->vet[i]=lst->vet[i-1];
        lst->vet[aux]=elem;
    }
    lst->Fim++;
    return 1;
}

int remove_ord(Lista lst, int elem){
    if(lst==NULL||lista_vazia(lst)==1||elem<lst->vet[0]||elem>lst->vet[lst->Fim-1])
        return 0;
    int i, auxr=0;
    while(auxr<lst->Fim && lst->vet[auxr]<elem)
        auxr++;
    if(auxr==lst->Fim||lst->vet[auxr]>elem)
        return 0;
    for(i=auxr+1;i<lst->Fim;i++)
        lst->vet[i-1]=lst->vet[i];
    lst->Fim--;
    return 1;

    if(auxr==lst->Fim||lst->vet[auxr]>elem)
        return 0;
    for(i=auxr+1;i<lst->Fim;i++)
        lst->vet[i-1]=lst->vet[i];
    lst->Fim--;
    return 1;
}

void imprime_lista(Lista lst){
    int i;
    if(lista_vazia(lst)==1)
        printf("lista vazua");
    for(i=0;i<lst->Fim; i++){
        printf("%d", lst->vet[i]);
    }
}
