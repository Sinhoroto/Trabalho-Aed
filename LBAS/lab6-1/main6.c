#include <stdio.h>
#include <stdlib.h>
#include "header6.h"
int main()
{
    int main()
{
    Lista lst;

    lst=cria_lista();

    insere_elem(&lst, 4);
    insere_elem(&lst, 8);
    insere_elem(&lst, 0);
    insere_elem(&lst, 19);
    insere_elem(&lst, 2);
    insere_elem(&lst, 7);
    insere_elem(&lst, 9);
    insere_elem(&lst, 22);
    insere_elem(&lst, 8);
printf("Lista 1: \n");
    imprime_lista(lst);

printf("\n\no menor eh: ");
    int ma=menor(&lst);
    printf("%d",ma);

printf("\n\no tamanho eh: ");
    int tam=tamanho(lst);
    printf("%d", tam);


}
