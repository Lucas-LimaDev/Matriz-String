#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numAle, palpite, tentativas = 10;


    srand(time(NULL));

    numAle = rand() % 100 +1;

    printf("Bem vindos ao jogo de adivinhações! \n");
    printf("Adivinhe um número entre 1 e 100. \n");


while  ( tentativas > 0)
{
    printf("Tentativas restantes:! %d\n", tentativas);
    printf("Digite seu palpite: ");
    scanf("%d", &palpite);
 if ( palpite == numAle)
 {
    printf("Parábens ! Você acertou!\n");
        break;

    }else if (palpite < numAle)
    {
    printf("seu palpite é baixo!\n");

    }else {
    printf("Seu palpite é muito alto!\n");

        }
        tentativas --;

        
    }
        if (tentativas == 0){
        printf("Suas chanches acabaram ,Jogo finalizado. O número era %d.\n", numAle);


    }
    return 0;
}
