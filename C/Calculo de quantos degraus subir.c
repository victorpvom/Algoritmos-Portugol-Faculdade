#include <stdio.h>

int main(void) {
  float degrau, escada;
  printf("Qual a altura do degrau da escada?\n");
  scanf("%f", &degrau);
  printf("Qual a altura que deseja alcançar?\n");
  scanf("%f", &escada);
  printf("O usuário deve subir %.1f degraus", escada/degrau);
  return 0;
}