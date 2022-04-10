#include <stdio.h>

int main(void) {
  float LATAS, PAREDE, XLATAS;

  PAREDE=17.2;
  LATAS=2; 

  XLATAS=PAREDE/LATAS;

  printf("O pintor precisará de %.2f latas \n", XLATAS);
  return 0;
}