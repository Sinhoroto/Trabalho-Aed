typedef struct no *Lista;

Lista inicializar_lista();

int lista_vazia(Lista lst);

int insere_elem(Lista *lst, int elem);

int remove_elem(Lista *lst, int elem);

int tamanho(Lista lst);

int imprime_lista(Lista lst);
