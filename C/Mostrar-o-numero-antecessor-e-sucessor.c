#include <stdio.h>

int main(void) {
  int NUM;
  printf("Digite um número inteiro\n");
  scanf("%d", &NUM);
  printf("O antecessor desse valor é %d\n", NUM-1);
  printf("O sucessor desse número é %d\n", NUM+1);
  return 0;
}