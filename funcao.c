#include <stdio.h>

int FormadoRepetente(int media)
{
    if (media >= 5)
    {
        printf("Aluno provado com media %d", media);
    }
    else
    {
        printf("Aluno reprovado com media %d", media);
    }
}

int mediaNota(int notas[], int tamanho)
{
    int resultado = 0;
    for (int i = 0; i < tamanho; i++)
    { 
        resultado += notas[i];
    }

    int media = resultado / 4;
    FormadoRepetente(media);
}

int main()
{

    int notas[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Digite sua nota%d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    mediaNota(notas, 4);

    return 0;
}