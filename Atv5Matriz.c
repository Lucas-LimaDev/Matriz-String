#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matriz1[2][2];
    int matriz2[2][2];
    int multiplicacao[2][2];
    int linhai, colunaj;

    printf("Digite os valores da matriz 1:\n");
    for (linhai = 0; linhai < 2; linhai++)
    {
        for (colunaj = 0; colunaj < 2; colunaj++)
        {
            printf("Matriz1[%d][%d]: ", linhai, colunaj);
            scanf("%d", &matriz1[linhai][colunaj]);
        }
    }
    printf("Digite os valores da matriz 2:\n");
    for (linhai = 0; linhai < 2; linhai++)
    {
        for (colunaj = 0; colunaj < 2; colunaj++)
        {
            printf("Matriz2[%d][%d]: ", linhai, colunaj);
            scanf("%d", &matriz2[linhai][colunaj]);
        }
    }

    for (linhai = 0; linhai < 2; linhai++)
    {
        for (colunaj = 0; colunaj < 2; colunaj++)
        {
            multiplicacao[linhai][colunaj] = matriz1[linhai][colunaj] * matriz2[linhai][colunaj] + matriz1[linhai][colunaj] * matriz2[linhai][colunaj];
        }
    }

    printf("O resultado da multiplicação das matrizes é: \n \n  ");
    for (linhai = 0; linhai < 2; linhai++)
    {
        for (colunaj = 0; colunaj < 2; colunaj++)
        {
            printf("%d ", multiplicacao[linhai][colunaj]);
        }
        printf("\n");
    }

    return 0;
}