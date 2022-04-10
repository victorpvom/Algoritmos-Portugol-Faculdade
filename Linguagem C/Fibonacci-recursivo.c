#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> //Biblioteca escolhida para calcular o tempo

void calculaFibonnaci();
int fibonnaci();

int vetor[1000];

//Função que auxiliará a criação da sequencia de numeros
void calculaFibonnaci(int i) { 

    if(i==1 || i==2) {
        vetor[i] = 1;
    }
    else { 
        vetor[i] = fibonnaci(i-1) + fibonnaci(i-2);
    }
}

int fibonnaci(int i)
{
    if(vetor[i]==0) {
        calculaFibonnaci(i);
        printf("%d \n", vetor[i]);
    }
    else {
        return vetor[i];
    }   
} 

int main(int argc, char* argv[]) 
{
    int i, N;
    time_t t_ini, t_fim;
    float tempo;
    int *vetor;
    printf("Digite quantos termos da série de fibonacci você deseja: ");
    scanf("%d", &N); //Recebendo até quantas vezes o algoritmo chegará realizando o Fibonacci
    t_ini = time(NULL); //Começa a medir o tempo de execução
    for(i=1; i<=N; i++)
        fibonnaci(i);
    t_fim = time(NULL); //final do tempo de execução

    tempo = difftime(t_fim, t_ini); //Calculando a diferença entre inicio e fim
    printf("Tempo: %f", tempo);
    return 0;
} 