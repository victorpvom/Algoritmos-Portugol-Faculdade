#include <stdio.h>

int main(void) {
  float ANOS, MESES, DIAS, IDADETOTAL;

  ANOS=22;
  MESES=3;
  DIAS=17;

  IDADETOTAL=(ANOS*365)+(MESES*30)+DIAS;

  printf("A IDADE EM DIAS É %.1f \n", IDADETOTAL);
  return 0;
}