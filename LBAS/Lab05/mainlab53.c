#include <stdio.h>
#include <stdlib.h>
#include "headerlab53.h"
int main()
{
    Lista lst;
    lst=cria_lista();
    imprime_lista(lst);
    insere_elem(lst, 4);
    insere_elem(lst, 8);
    insere_elem(lst, 1);
    imprime_lista(lst);
    int menor=retorna_menor(lst);
    printf("%d", menor);
    int tamanho=retorna_tamanho(lst);
    imprime_lista(lst);
    printf("%d", tamanho);
}
