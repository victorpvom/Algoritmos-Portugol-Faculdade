#include <stdio.h>

int main(void) {
  int a, b, i, resultado; 
  printf("Digite o número: \n");
  scanf("%d", &a);
  printf("Digite o número elevado: \n");
  scanf("%d", &b);

  resultado = 1;

  for (i=1; i<=b; i++)
  {
    resultado=resultado*a;
  }
 printf("%d\n", resultado);
 
  return 0;
}