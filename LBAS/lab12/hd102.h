typedef struct fila *Fila;
Fila cria_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_fim(Fila f, int elem);
remove_ini(Fila f, int *elem);
void imprime_fila(Fila f);
