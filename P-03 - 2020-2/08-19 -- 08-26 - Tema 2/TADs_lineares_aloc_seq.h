//TADs lineares (lista, pilha e fila) com aloca��o sequencial (est�tica)

//define o n�mero de elementos que podem ser inseridos nos TADs
#define TAM 1000
#define Size 10

//tipo exportado
//define o TipoItem que � o tipo dos elementos dos TADs
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//-----TAD lista-----

//tipo exportado
//define o TipoLista que � o tipo do TAD lista
typedef struct
{
    TipoItem itens[TAM];
    int primeiro, ultimo;
}TipoLista;

typedef struct
{
    TipoItem itens[Size];
    int first,last;
}List;

//fun��es exportadas
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista);

//testa se a lista � vazia
int TestaListaVazia(TipoLista *lista);

//insere um elemento do tipo TipoItem na lista
void InsereLista(TipoLista *lista, TipoItem item);

//remove um elemento do tipo TipoItem da lista
void RemoveLista(TipoLista *lista, TipoItem *item, int pt);

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista);

//List* NewList();
void CreateEmptyList(List *list_);
int TestEmptyList(List *list_);
void FillList(List *list_,TipoItem item);
void PrintList(List *list_);
void RemoveFromList(List *list_,int removal);

/*//---------------------------------------
-------------------------------------------
-------------------------------------------
-------------------------------------------
//*/

//-----TAD pilha-----

//tipo exportado
//define o TipoPilha que � o tipo do TAD pilha
typedef struct
{
    TipoItem itens[TAM];
    int topo;
}TipoPilha;

//fun��es exportadas
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

//testa se a pilha � vazia
int TestaPilhaVazia(TipoPilha *pilha);

//insere um elemento do tipo TipoItem na pilha
void InserePilha(TipoPilha *pilha, TipoItem item);

//remove um elemento do tipo TipoItem da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item);

//imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha);

//-----TAD fila-----

//tipo exportado
//define o TipoFila que � o tipo do TAD fila
typedef struct
{
    TipoItem itens[TAM];
    int frente, tras;
}TipoFila;

//fun��es exportadas
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila);

//testa se a fila � vazia
int TestaFilaVazia(TipoFila *fila);

//insere um elemento do tipo TipoItem na fila
void InsereFila(TipoFila *fila, TipoItem item);

//remove um elemento do tipo TipoItem da fila
void RemoveFila(TipoFila *fila, TipoItem *item);

//imprime os elementos da fila
void ImprimeFila(TipoFila *fila);
