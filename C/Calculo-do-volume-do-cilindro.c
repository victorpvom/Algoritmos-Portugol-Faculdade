#include <stdio.h>

int main(void) {
  float ALTURA, RAIO, PI;
  PI=3.141592;
  printf("Digite a altura do cilindro\n");
  scanf("%f", &ALTURA);
  printf("Digite o raio do cilindro\n");
  scanf("%f", &RAIO);
  printf("O volume do cilindro é %.2f", 
  PI*(RAIO*RAIO)*ALTURA);
  return 0;
}