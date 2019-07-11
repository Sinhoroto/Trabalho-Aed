typedef struct no *Lista;

Lista inicializar_lista();

int lista_vazia(Lista lst);

int insere_final(Lista *lst, int elem);

int remove_inicio(Lista *lst, int *elem);

int imprime_lista(Lista lst);

int tamanho(Lista lst);
