#include <stdio.h>
#include <stdlib.h>

int main()
{
        int const vetor = 10;
        int vetor1[vetor];
        int i;
        int soma = 0;

        for (i = 0; i < vetor; i++)
        {
                printf("Digite um número inteiro :");
                scanf("%d", &vetor1[i]);
        }
        for (i = 0; i < vetor; i++)
        {

                soma = soma + vetor1[i];
        }
        printf("A soma dos vetores são: \n %d ", soma);
}