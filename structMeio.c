#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura para um nó da lista encadeada
struct Lista
{
    int info;           // Armazena o valor do nó
    struct Lista *prox; // Ponteiro para o próximo nó
};

// Função para inserir um novo elemento no meio da lista
struct Lista *inserirMeio(struct Lista *l, int pos, int i) {
    // Alocar memória para um novo nó
    struct Lista *novo = (struct Lista *)malloc(sizeof(struct Lista));
    novo->info = i;     // Definir o valor do novo nó

    // Lidar com casos especiais: lista vazia ou inserção no início
    if (l == NULL || pos == 0) {
        novo->prox = l;  // O próximo nó do novo nó é a lista atual
        return novo;     // Retornar o novo nó como novo início da lista
    }

    // Encontrar o nó na posição anterior à posição de inserção
    struct Lista *p = l; // Criar um ponteiro para percorrer a lista
    int cont = 1;        // Variável de contagem para acompanhar a posição atual

    // Percorrer até o elemento anterior à posição de inserção
    while (p->prox != NULL && cont < pos) {
        p = p->prox;     // Avançar para o próximo nó
        cont++;          // Incrementar a contagem
    }

    // Inserir o novo elemento no meio da lista
    novo->prox = p->prox; // O próximo nó do novo nó é o próximo nó de 'p'
    p->prox = novo;       // O próximo nó de 'p' é o novo nó

    return l; // Retornar o início da lista atualizada
}

int main() {
    struct Lista *lista = NULL; // Inicializar a lista como vazia

    // Inserir elementos na lista
    lista = inserirMeio(lista, 0, 10); // Inserir no início
    lista = inserirMeio(lista, 1, 20); // Inserir no meio
    lista = inserirMeio(lista, 0, 15); // Inserir no meio

    // Imprimir os valores da lista resultante
    struct Lista *atual = lista;
    while (atual != NULL) {
        printf("%d\n", atual->info); // Imprimir o valor do nó atual
        atual = atual->prox;         // Avançar para o próximo nó
    }

    return 0;
}
