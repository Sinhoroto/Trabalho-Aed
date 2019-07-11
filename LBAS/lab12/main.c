#include <stdio.h>
#include <stdlib.h>

#include "fila.h"


int main()
{
    Fila f = cria_fila();
    int x;
    imprime_fila(f);

    insere_fim(f, 5);
    insere_fim(f, 4);
    insere_fim(f, 6);
    insere_fim(f, 3);

    imprime_fila(f);

    remove_ini(f, &x);
    printf("Elemento removido: %d, \n", x);

    imprime_fila(f);

    remove_ini(f, &x);
    remove_ini(f, &x);
    remove_ini(f, &x);

    imprime_fila(f);
}
