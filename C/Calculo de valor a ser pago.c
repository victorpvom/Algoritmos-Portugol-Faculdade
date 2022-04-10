#include <stdio.h>

int main(void) {
  float DIAS; 
  printf("Quantos dias o encanador trabalhou? \n");
  scanf("%f", &DIAS);
  printf("O valor que deve ser pago é %.1f", (DIAS*30)*0.8);
  return 0;
}