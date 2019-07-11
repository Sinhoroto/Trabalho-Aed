#include <stdio.h>
#include <stdlib.h>

#include "fila.h"
int main()
{
    //Exercicio 1
    /*
    Fila f = cria_fila();
    int x;
    insere_fim(f, 3);
    insere_fim(f, 7);
    imprime_fila(f);
    remove_ini(f, &x);
    imprime_fila(f);
    return 0;
    */

    //Exercicio 2
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
