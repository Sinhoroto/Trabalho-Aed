#include <stdio.h>
#include <stdlib.h>
#include "headerlab52.h"
int main()
{
    Lista lst;
    lst=cria_lista();
    imprime_lista(lst);
    insere_elem(&lst, 4);
    insere_elem(&lst, 0);
    insere_elem(&lst, 8);
    imprime_lista(lst);
    remove_elem(&lst, 8);
    imprime_lista(lst);

}
