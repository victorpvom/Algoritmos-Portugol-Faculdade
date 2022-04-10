#include <stdio.h>

int main()
{
	float vet[10], numerador, denominador, media;
	int i;

	numerador = 0;
	denominador = 0;

	for(i=0; i<=9; i++)
	{
		printf("Digite o %do valor: ", i+1);
		scanf("%f", &vet[i]);
	}

	for(i=0; i<=9; i++)
	{
		if(vet[i] > 4)
		{
			numerador = numerador + vet[i];
			denominador++;
		}
	}

	if(denominador > 0)
	{
		media = numerador / denominador;
		printf("A média é %f\n", media);
	}
	else
	{
		printf("Nenhum valor digitado é maior que 4!\n");
	}

	return 0;
}