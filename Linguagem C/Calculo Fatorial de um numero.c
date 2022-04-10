//Algoritmo para calcular o fatorial de um número. Ou seja, ele vai multiplicar o numero dele vezes NUMERO-1 até chegar a zero

#include <stdio.h>

int main(void) {
  int num, i, x; 
  printf("Digite o número\n");
  scanf("%d", &num);
  i=num;
  x=1;
  for (num=1; num<=i; num++)
  {
    x=x*num; 
  }
 printf("%d\n", x);
  return 0;
}