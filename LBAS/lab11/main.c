#include <stdio.h>
#include <stdlib.h>

#include "fila.h"


int main()
{
    //Exercicio 2
    Fila *f;
    f = cria_fila();
    //Nao fiz funcao imprime

    insere_fim(*f, 5);
    insere_fim(*f, 4);
    insere_fim(*f, 6);
    insere_fim(*f, 3);

    //Nao fiz funcao imprime
    int x;
    remove_ini(*f, &x);
    printf("O numero removido foi: %d \n", x);

    //Nao fiz funcao imprime

    remove_ini(*f, &x);
    printf("O numero removido foi: %d \n", x);

    //Nao fiz funcao imprime

}
