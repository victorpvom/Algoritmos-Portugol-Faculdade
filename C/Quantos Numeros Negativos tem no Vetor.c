#include <stdio.h>

int main(void) {
  int vet[100], qtdnegativo;
  qtdnegativo=0;
  
  for(i=0; i<100; i++)
  {
    printf("Digite um numero: ");
    scanf("%d",vet[i]);
    if(vet[i]<0)
    {
      qtdnegativo++;
    }
    
    }
    printf("Existem %d numeros negativos", qtdnegativo);
  return 0;
}