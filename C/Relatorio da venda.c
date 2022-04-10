#include <stdio.h>

int main(void) {
  float total; 
  printf("Qual o valor total da compra?\n");
  scanf("%f", &total);
  printf("O valor com 10 por cento de desconto é %.1f\n",(total)-(total*0.10));
  printf("O valor de cada parcela em três vezes é %.1f\n", total/3);
  printf("A comissão do vendedor para compra a vista é %.1f\n",(total-(total*0.10))*0.05);
  printf("A comissão do vendedor em compra parcelada é %.1f",(total*0.05));
  return 0;
}