#include <stdio.h>
#include <stdlib.h>

struct Lista
{
    int info; //famosa groselha, onde dados estão armazenadaos ou no caso serão armazenados
    struct Lista* prox; //Declara prox, a seleção de alocação, a declaração de um ponteiro para outra struct do msm tipo
};

struct Lista* inserir(struct Lista* l, int i) {
    struct Lista* novo = (struct Lista*)malloc(sizeof(struct Lista));
    novo->info = i; //Insere o elemento na locação
    novo->prox = l; //Seleciona/aponta outra alocação. igual a seta dos desenho -> e o prox seia a seta

    return novo;
}

int main() {
    struct Lista* lista = NULL;  // Inicializa a lista como vazia, não é possivel definir a valor incial de uma struct dentro dela, não tente :)

    lista = inserir(lista, 10);  // Insere um elemento na lista
    lista = inserir(lista, 20);
    lista = inserir(lista, 30);

    // Percorre e imprime os elementos da lista
    struct Lista* atual = lista; // você pode colocar no lugar de lista, na printf abaixo, atual, vai funcionar tbm 
        printf("%d\n", lista->info); // ou printf("%d\n", atual->info);
        lista = lista->prox; // ou lista = atual->prox;
    

    return 0;
};


