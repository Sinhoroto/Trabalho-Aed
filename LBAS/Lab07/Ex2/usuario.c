#include <stdio.h>
#include <stdlib.h>
#include "racional.h"

int main()
{
    Lista lst;
    lst = inicializar_lista();

    insere_elem(&lst, 5);
    insere_elem(&lst, 4);
    insere_elem(&lst, 5);
    insere_elem(&lst, 6);
    insere_elem(&lst, 3);

    imprime_lista(lst);
    tamanho(lst);

    remove_elem(&lst, 5);

    imprime_lista(lst);
    tamanho(lst);

    remove_elem(&lst, 5);

    imprime_lista(lst);
    tamanho(lst);

    return 0;
}
