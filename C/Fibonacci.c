#include <stdio.h>
#include <time.h>
 
int main()
{
  int a, b, auxiliar, i, n;
  time_t t_ini, t_fim; //Biblioteca escolhida para calcular o tempo. 
  float tempo;
 
  a = 0;
  b = 1;

  printf("Digite um número: ");
  scanf("%d", &n);
  printf("Série de Fibonacci:\n");
  printf("%d\n", b);
 
  t_ini = time(NULL); //Inicio do calculo do tempo
  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
 
    printf("%d\n", auxiliar);
  }
  t_fim = time(NULL); //Final do calculo do tempo

  tempo = difftime(t_fim, t_ini); //Calculando a diferença

  printf("Tempo: %f", tempo);
}