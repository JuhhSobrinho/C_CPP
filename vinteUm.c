#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void result(int array[], int tamanho, int *pontos, int mostrar)
{
    int soma = 0;

    if (mostrar)
    {
        printf("\nNumeros: ");
        for (int i = 0; i < tamanho; i++)
        {
            soma += array[i];
            printf("%d", array[i]);
            if (i < tamanho - 1)
            {
                printf(" + ");
            }
        }
        printf(" = %d\n", soma);
    }
    else
    {
        for (int i = 0; i < tamanho; i++)
        {
            soma += array[i];
        }
    }
    *pontos = soma;
}

int main()
{
    int pc = 0, eu = 0, res = 1, myNumbers[4], pcNumbers[4];
    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    for (int i = 0; i < 2; i++)
    {
        myNumbers[i] = rand() % 11;
        pcNumbers[i] = rand() % 11;
        pc += pcNumbers[i];
        eu += myNumbers[i];
    }

    printf("EU: %d+%d = %d \n", myNumbers[0], myNumbers[1], eu);
    printf("PC: X + X = X \n");

    for (int i = 2; i < 5; i++)
    {

        if (res)
        {
            printf(" \n Gostaria de continuar o jogo (ex: sim:1 não:0)?\n");
            scanf("%d", &res);

            if (res)
            {
                myNumbers[i] = rand() % 11;
                result(myNumbers, i + 1, &eu, 1);
            }
        }

        if (pc < 17)
        {
            pcNumbers[i] = rand() % 11;
            printf("pc: ");
            for (int b = 0; b < i + 1; b++)
            {
                printf("X");
                if (b < i)
                {
                    printf(" + ");
                }
            }
            printf(" = X");

            result(pcNumbers, i + 1, &pc, 0);
        }
    }

    int euDiff = abs(21 - eu);
    int pcDiff = abs(21 - pc);
    if (pcDiff < euDiff)
    {
        printf("pc ganhou: %d \n", pc);
        printf("vc: %d", eu);
    }
    else if (euDiff < pcDiff)
    {
        printf("vc ganhou: %d \n", eu);
        printf("pc:  %d", pc);
    }
}
