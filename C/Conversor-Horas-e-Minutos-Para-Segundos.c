#include <stdio.h>

int main(void) {
  float HORAS, MINUTOS, SEGUNDOS, TOTAL;

  HORAS=3;
  MINUTOS=56;
  SEGUNDOS=37;
  TOTAL=(HORAS*3600)+(MINUTOS*60)+SEGUNDOS;

  printf("Carla estudou %.2f segundos \n", TOTAL);
  return 0;
}