#define MAX 100


//typedef struct lista Lista;

struct lista *cria_lista();
void libera_lista(struct lista *lst);
int tamanho_lista(struct lista *lst);
int lista_vazia(struct lista *lst);
int lista_cheia(struct lista *lst);
int insere_lista_final(struct lista *lst, int elem);
int insere_lista_inicio(struct lista *lst, int elem);
int insere_lista_ordenada(struct lista *lst, int elem);
void imprime_lista(struct lista *lst);
int remove_lista_final(struct lista *lst);
int remove_lista_inicio(struct lista *lst);
int remove_lista(struct lista *lst, int mat);
void menu();













