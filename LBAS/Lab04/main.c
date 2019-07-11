#include <stdio.h>
#include <stdlib.h>
#include "racionais.h"

int main(){
    int Num, Den;
    racional *R1, *R2, *R3;
    R1=generate();
    R2=generate();
    if (R1 == NULL || R2 == NULL) {
        printf ("Nao foi possivel criar os dois numeros racionais.\n");
        return -1;
    }
    printf("\nEntre o numerador do 1o Racional eh: "); scanf("%d",&Num);
    printf("\nEntre o denominador do 1o Racional eh: "); scanf("%d",&Den);
    if (set_value(R1, Num, Den) == 0){
        printf ("Nao foi possivel preencher o primeiro numero racional.\n"); return -1;
    }
    printf("\nEntre o numerador do 2o Racional: "); scanf("%d",&Num);
    printf("\nEntre o denominador do 2o Racional: "); scanf("%d",&Den);
    if (set_value(R2, Num, Den) == 0){
        printf ("Nao foi possivel preencher o primeiro numero racional.\n"); return -1;
    }
    R3=sum(R1,R2);
    if (R3==NULL) {
        printf ("Nao foi possivel somar os dois numeros racionais.\n"); return (-1);
    }
    printf("\n O valor do racional resultante da soma eh ");
    print_value(R3);

    return 0;
}
