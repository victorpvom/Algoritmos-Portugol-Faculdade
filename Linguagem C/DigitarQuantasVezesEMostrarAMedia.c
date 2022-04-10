//Algoritmo para perguntar quantos números ele quer colocar dentro de um vetor e recebe-los. 

#include <stdio.h>

int main(void) {
  int n, i, media, vet[n], contador, total;
  
  total=0;
  contador=0;
  
  printf("Quantos números deseja colocar?\n");
  scanf("%d", &n);
  for(i=0;i<n; i++)
  {
    printf("Digite o número ");
    scanf("%d", &vet[i]);
    
    total=total+vet[i];
    contador++;
  }
  media=total/contador;
  printf("A media é %d", media);
 
  return 0;
}