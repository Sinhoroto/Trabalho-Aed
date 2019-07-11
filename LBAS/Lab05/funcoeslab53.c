#include <stdio.h>
#include <stdlib.h>
#include "headerlab53.h"
#define MAX 10
struct lista{
    int vet[10];
    int Fim;
};
//typedef struct lista Lista;

Lista cria_lista(){
    Lista lst;
    lst=(Lista)malloc(sizeof(struct lista));

    if(lst != NULL)
        lst->Fim=0;//lista esta vazia
    return lst;
}

int lista_vazia(Lista lst){
    if(lst->Fim==0)
        return 1;//ta vazia
    else
        return 0;//nao vazia
}

int lista_cheia(Lista lst){
    if(lst->Fim==MAX)
        return 1;//cheia
    else
        return 0;//nao cheia
}

int insere_elem(Lista lst, int elem){
    if(lst==NULL||lista_cheia(lst)==1)
        return 0;
    lst->vet[lst->Fim]=elem;//colocar elemento
    lst->Fim++;//avanca o fim(contador)
    return 1;
}

int remove_elem(Lista lst, int elem){
    if(lst==NULL||lista_vazia(lst)==1)
        return 0;
    int i, Aux=0;
    while(Aux < lst->Fim && lst-> vet[Aux]!=elem)
        Aux++;
    if(Aux == lst->Fim)
        return 0;
    for(i=Aux+1; i<lst-> Fim; i++)
        lst->vet[i-1]=lst->vet[i];
    lst->Fim--;
    return 1;
}

void imprime_lista(Lista lst){
    for(int i=0;i<lst->Fim;i++){
        printf("%d",lst->vet[i]);
    }
}

int retorna_menor(Lista lst){
    int m=0;
    for (int i=0; i<lst->Fim;i++){
        if(lst->vet[i]<m)
        m=lst->vet[i];
    }
    return m;
}

int retorna_tamanho(Lista lst){
    int tamanho=lst->Fim;
    return tamanho;
}
