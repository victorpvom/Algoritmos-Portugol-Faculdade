#include <stdio.h>

int main(void) {
  float DOLAR, REAL;

  printf("Quantos reais você tem? ");
  scanf("%f", &REAL);
  printf("Qual a cotação do dolar hoje? ");
  scanf("%f", &DOLAR);

  printf("O valor em dolar será %2.f", REAL/DOLAR);

  return 0;
}