#include <stdio.h>
#include <stdlib.h>



int main (){

 char nome[10];
  int i;
 

        printf("Digite seu primeiro nome:");
        scanf("%s", nome);
        printf("Seu nome é: %s\n", nome);
  for (i = 0; i < 10; i++) {
  }
  printf("Seu nome ao contrário é: %c\n", nome[i]);
  for (i = 10; i >= 0; i--){
    printf("%c", nome[i]);
    
  }
  
   return 0;

}