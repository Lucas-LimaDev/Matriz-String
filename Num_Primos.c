#include <stdio.h>
#include <stdbool.h>


bool ePrimo(int num) {
    if (num <=1){
        return false;
    }
    for ( int i = 2; i *i <= num; i++){
        if (num% i == 0){
            return false;

        }
    }
    return true;
}
int main(){
    int a , b;
    printf("Digite o primeiro numero  :");
    scanf("%d", &a);
    printf("Digite o segundo numero:  ");
    scanf("%d", &b);

    printf("Os números primos no intervalo de %d , %d: \n", a, b);
    for (int i = a ; i <=b; i++){
        if (ePrimo(i)){
            printf(" %d ", i);        }
    }
    printf("\n");
return 0;

}
