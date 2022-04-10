#include <stdio.h>

int main()
{
int saque, n100, n50, n10, n5, n2;
printf("Quanto você deseja sacar?\n");
scanf("%d",&saque);
printf("Voce solicitou um saque de R$ %d reais!\n", saque);
n100 = saque / 100;
n50 = saque % 100 / 50;
n10 = saque % 100 % 50 /10;
n5 = saque % 100 % 50 % 10 / 5;
n2 = saque % 100 % 50 % 10 / 2;
printf("O valor de notas de 100 = %d\n", n100);
printf("O valor de notas de 50 = %d\n", n50);
printf("O valor de notas de 10 = %d\n", n10);
  if (n5%2 == 0){
      printf("O valor de notas de 5 = %d\n", n5);
  }
  else printf ("O valor de notas de 5 = 0 \n");
printf("O valor de notas de 2 = %d\n", n2);

return 0;
}