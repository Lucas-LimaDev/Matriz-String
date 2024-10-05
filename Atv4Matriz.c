#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
  int matriz1[3][3];
  int matriz2[3][3];
  int soma [3][3];
  int linhai, colunaj;
  
  printf("Digite os valores da matriz 1:\n");
  for (int linhai = 0; linhai < 3; linhai++){
    for (int colunaj = 0; colunaj < 3; colunaj++){
      printf("Matriz1[%d][%d] = ", linhai, colunaj);
      scanf("%d", &matriz1[linhai][colunaj]);
      
    }
    
  }
  printf("Digite os valores da matriz 2:\n");
  for (int linhai = 0; linhai < 3; linhai++){
    for (int colunaj = 0; colunaj < 3; colunaj++){
      printf("Matriz2[%d][%d] = ", linhai, colunaj);
      scanf("%d", &matriz2[linhai][colunaj]);
    }
  }

  for ( linhai = 0; linhai < 3; linhai++){
    for (colunaj =0; colunaj < 8; colunaj++){
      soma[linhai][colunaj] = matriz1[linhai][colunaj] + matriz2[linhai][colunaj];
    }
  }
 
  printf("A soma das matrizes é: \n\n");
  for ( linhai = 0; linhai < 8; linhai++){
    for (colunaj = 0; colunaj < 8; colunaj++){
       printf("%3.d",soma[linhai][colunaj]);
    }
    printf("\n");
  }
 
  return 0;
}