#include <stdio.h>
#include <stdlib.h>

#include "hd101.h"
int main()
{
    Fila f = cria_fila();
    int x;
    insere_fim(f, 3);
    insere_fim(f, 8);
    imprime_fila(f);
    remove_ini(f, &x);
    imprime_fila(f);
    return 0;
}
