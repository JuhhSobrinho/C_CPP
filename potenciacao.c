#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maiorMenor(int idade)
{
    if (idade >= 18)
    {
        printf("\n %d Anos você é maior de idade :)", idade);
    }
    else
    {
        printf("\n %d Anos, Você é menor de idade :)", idade);
    }
}

int sintaaPotencia(int base, int expoente)
{
    int result = 1;

    for (int i = 0; i < expoente; i++)
    {
        result = result * base;
    }

    printf("\n %d o resultado da potencia \n com base %d e expoente %d", result, base, expoente);
}

int main()
{
setlocale(LC_ALL, "portuguese-brazilian");
    int idade;
    int base;
    int expoente;

    printf("\n Informe sua Idade: (ex: 18)     ");
    scanf("%d", &idade);

    maiorMenor(idade);

    printf("\n Informe a base que queira usar: (ex: 3)     ");
    scanf("%d", &base);

    printf("\n Informe o expoente que queira usar: (ex: 3³)    ");
    scanf("%d", &expoente);

    sintaaPotencia(base, expoente);

    return 0;
}