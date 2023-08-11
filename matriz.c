#include <stdio.h>

int main() {
    // Criando a matriz 2x2
    int matriz[2][2];

    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("Insira o valor para matriz [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    }
    
    printf("Matriz inserida:\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 2; coluna++) {
            printf("%d ", matriz[linha][coluna]);
        }
        printf("\n");
    }
    
    return 0;
}
