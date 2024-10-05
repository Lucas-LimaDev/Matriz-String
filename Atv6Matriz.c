#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int matriz[3][3];
    int transposta[3][3];
    int i, j;

    printf("Digite os valores da matriz: \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("O resultado da matriz transposta é: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transposta[i][j] = matriz[j][i];
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
