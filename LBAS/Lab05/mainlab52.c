#include <stdio.h>
#include <stdlib.h>
#include "headerlab52.h"
int main()
{
    Lista lst;

    lst = cria_lista();
    imprime_lista(lst);
    insere_ord(lst, 4);
    insere_ord(lst, 8);
    insere_ord(lst, 0);
    insere_ord(lst, 19);
    insere_ord(lst, 2);
    insere_ord(lst, 7);
    insere_ord(lst, 9);
    insere_ord(lst, 22);
    insere_ord(lst, 8);
    imprime_lista(lst);
    remove_ord(lst, 8);
    imprime_lista(lst);
}
