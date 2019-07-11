typedef struct pilha *Pilha;

Pilha cria_pilha();

int pilha_vazia(Pilha p);

int pilha_cheia(Pilha p);

int push(Pilha p, int elem);

int pop(Pilha p, int *elem);

int converte_dec_bin(int deci);
