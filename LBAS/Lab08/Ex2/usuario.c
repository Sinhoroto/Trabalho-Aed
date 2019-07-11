#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    Pilha p;
    int elem;
    p = cria_pilha();

    imprimir(p);

    push(&p, 5);
    push(&p, 4);
    push(&p, 6);
    push(&p, 3);

    imprimir(p);

    pop(&p, &elem);
    printf("\nElemento removido: %d\n", elem);

    imprimir(p);

    pop(&p, &elem);
    printf("\nElemento removido: %d\n", elem);

    imprimir(p);

    return 0;
}
