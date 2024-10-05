#include <stdio.h>
#include <stdlib.h>
int main ()
{

    int num, digito, par = 0, impar = 0;

        printf("Digite um número inteiro positivo: ");
        scanf("%d", &num);

        while (num > 0){
            digito = num % 10;
            if (digito % 2 == 0)
            {
                par ++;
            }else {
                impar ++;
            }    
            num /= 10;
        }
        printf("NÚMEROS PARES: %d\n", par);
        printf("NÚMEROS ÍMPARES: %d\n",impar);
        return 0;
}