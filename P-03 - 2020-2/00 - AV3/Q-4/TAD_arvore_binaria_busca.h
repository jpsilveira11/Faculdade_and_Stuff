//TAD �rvore bin�ria de busca com aloca��o encadeada (din�mica)

//tipo exportado
//define o TipoItem que � o tipo dos elementos do TAD �rvore bin�ria de busca (cl�ssica, AVL e B)
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoCelula que � o tipo das c�lulas que cont�m os elementos que s�o manipulados pelo TAD �rvore bin�ria de busca (cl�ssica ou AVL)
typedef struct celula
{
    TipoItem item;
    struct celula *esquerda;
    struct celula *direita;
    int balanco; // para o caso de a �rvore ser AVL
}TipoCelula;

//-----TAD �rvore bin�ria de busca-----

//fun��es exportadas
//cria uma �rvore bin�ria de busca vazia
void CriaArvoreBinariaBuscaVazia(TipoCelula **arvore);

//testa se a �rvore bin�ria de busca � vazia
int TestaArvoreBinariaBuscaVazia(TipoCelula **arvore);

//busca por um elemento na �rvore bin�ria de busca
TipoItem * BuscaArvoreBinariaBusca(TipoCelula **arvore, int chave);

//insere um elemento do tipo TipoItem na �rvore bin�ria de busca
void InsereArvoreBinariaBusca(TipoCelula **arvore, TipoItem item);

//remove um elemento do tipo TipoItem da �rvore bin�ria de busca
void RemoveArvoreBinariaBusca(TipoCelula **arvore, TipoItem item);

//imprime os elementos da �rvore bin�ria de busca
void ImprimeArvoreBinariaBusca(TipoCelula **arvore, int l);
