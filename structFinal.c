#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int info;           // Armazena o valor do nó
    struct Lista *prox; // Ponteiro para o próximo nó
};

// Função para inserir um novo elemento no final da lista
struct Lista *inserirFinal(struct Lista *l, int v)
{
    // Alocar memória para o novo nó
    struct Lista *novo = (struct Lista *)malloc(sizeof(struct Lista));
    novo->info = v;     // Atribuir o valor ao novo nó
    novo->prox = NULL;  // O próximo nó ainda não está definido

    // Caso especial: se a lista estiver vazia, o novo nó será o primeiro
    if (l == NULL)
    {
        return novo;
    }

    // Encontrar o último nó atual da lista
    struct Lista *p = l;
    while (p->prox != NULL)
    {
        p = p->prox;
    }

    // Conectar o novo nó como o próximo do último nó atual
    p->prox = novo;

    return l; // Retornar o início da lista
};


struct Lista *removerElemento(struct Lista *l, int v)
{
    struct Lista* anterior = NULL;
    struct Lista* p = l;

    while (p != NULL && p -> info != v) // Percorrendo toda a lista até aachar o p -> info que equivale a o valor de V. Vendo se o p for diferente null e se o p for diferente de v
    {
        anterior = p;
        p = p -> prox;
    }
    
    if (anterior == NULL)   //se o anterior for o valor ele vai pegar o anterior e pular, assim removendo, se for 1, 2, 3 e o que eu qeuro remover for o 2, ele vai pro 2 volta pro um e do um pula pro tres.
    {
        l = p -> prox;
    }else{
        anterior -> prox = p -> prox;
    }

    return l;
    
};



int main()
{
    struct Lista *lista = NULL; // Inicializar a lista como vazia

    // Inserir elementos no final da lista
    lista = inserirFinal(lista, 10);
    lista = inserirFinal(lista, 20);
    lista = inserirFinal(lista, 15);
    lista = removerElemento(lista, 10);


    // Percorrer a lista e imprimir os valores dos nós
    struct Lista *atual = lista;
    while (atual != NULL)
    {
        printf("%d\n", atual->info); // Imprimir o valor do nó atual
        atual = atual->prox;         // Avançar para o próximo nó
    }

    return 0;
}
