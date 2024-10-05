#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char palindromo[30];

    printf("Digite uma palavra para verificar se ela é um palíndromo: ");
    scanf("%s", palindromo);

    int i = 0;
    int j = strlen(palindromo) - 1;
    bool palindromo_verdadeiro = true;

    while (i < j)
    {
        if (palindromo[i] != palindromo[j])
        {
            palindromo_verdadeiro = false;
            break;
        }
        i++;
        j--;
    }
    if (palindromo_verdadeiro)
    {
        printf("A palavra %s é um palindromo.\n", palindromo);
    }
    else
    {
        printf("A palavra %s nao é um palindromo.\n", palindromo);
    }
    return 0;
}
