#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

int main()
{
    Lista lst;
    int *r;

    lst = inicializar_lista();

    insere_final(&lst, 5);
    insere_final(&lst, 4);
    insere_final(&lst, 6);

    imprime_lista(lst);
    tamanho(lst);

    remove_inicio(&lst, &r);
    printf("\nElemento removido: %d\n", r);

    imprime_lista(lst);
    tamanho(lst);

    remove_inicio(&lst, &r);
    printf("\nElemento removido: %d\n", r);

    imprime_lista(lst);
    tamanho(lst);

    remove_inicio(&lst, &r);
    printf("\nElemento removido: %d\n", r);

    imprime_lista(lst);
    tamanho(lst);

    return 0;
}
