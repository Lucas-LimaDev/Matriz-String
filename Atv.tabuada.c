#include <stdio.h>

int main() {

  int i,num;
  printf("Informe o número:");
    scanf("%d", &num);
  printf("\Tabuada do %d\n", num);
  
  for( i = 1 ; i <=10; i++)

  
  printf("%d x  %d = %d\n",num, i, num*i);
  return 0;
}