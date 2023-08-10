#include <stdio.h>

int main() 
{
    printf("Digite seu texto: ");
    
    // Declarar uma matriz de caracteres para armazenar a entrada
    char text[100];
    
    // Usar a função scanf para receber a entrada do usuário
    scanf("%s", text);
    
    printf("Voce  digitou: %s\n", text);
    
    return 0;
}
