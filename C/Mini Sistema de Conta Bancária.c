#include <stdio.h>
//----------------------------------------------------------------
//Feito por: 
//>Paulo Victor de Oliveira Moura<
//>Francisco Rafael Holanda<
//----------------------------------------------------------------
//Curso/Turno: Análise e Desenvolvimento de Sistemas/Noite
//----------------------------------------------------------------
//Profesora: Camila Colares
//----------------------------------------------------------------
int main()
{ 
int opcao = 0, menu = 0, i, quantidadeconta = 0, numeroConta = 0, possuiConta = 0;
float contadeposito;
int contasaque=0;
int contaOrigem;
int contaDestino;
float valorTransferencia, versaldo, valordeposito, valorsaque = 0;
float transferencia = 0;
//Vetores
float saldo[100];
int conta[100];
//Menu
 do{
    printf("\n\n\n===========================================\n");
    printf("=====Seja bem vindo ao Banco Invictus!=====\n");
    printf("===========================================\n\n");
    printf("[ 1 ] - Cadastrar conta\n");
    printf("[ 2 ] - Depósito\n");
    printf("[ 3 ] - Saque\n");
    printf("[ 4 ] - Transferências\n");
    printf("[ 5 ] - Listar contas\n");
    printf("[ 6 ] - Saldo\n");
    printf("[ 7 ] - Sair\n\n");
  
    {
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    }

  switch(opcao)
  {
    case 1: //Cadastrar conta
      menu = 0;
      while (menu != 1) {
        possuiConta = 0;
        if( quantidadeconta <=100) 
        {
          printf("\n\nDigite o numero da %dª conta: ", quantidadeconta+1);
          scanf("%d", &numeroConta);
          for(i = 0; i < quantidadeconta; i++)
          {
            if(conta[i] == numeroConta)
            {
              printf("\n\n>Erro! Essa conta já existe<");
              possuiConta = 1;
              break;
            }
          }
          if(possuiConta == 0)
          {
            conta[quantidadeconta] = numeroConta;
            printf("\n\nParabéns! A conta %d foi cadastrada com sucesso!", conta[quantidadeconta]);
            saldo[quantidadeconta] = 0;
            quantidadeconta++;
            printf("\n\nDeseja ir ao menu [1] ou cadastrar outra conta[2]? ");
            scanf("\n%d", &menu);
          }
          else
          {
            break;
          }
        } 
      }
    break;

    case 2: //Fazer depósito
      printf("\nInforme a conta que deseja realizar o depósito: ");
      scanf("%f", &contadeposito);
      for(i = 0; i<quantidadeconta; i++) 
      {
        if(contadeposito == conta[i])
        {
          printf("\nQual valor deseja depositar? ");
          scanf("%f", &valordeposito);
          saldo[i] += valordeposito;
          //printf("%f", saldo[i]);
          printf("\nO seu depósito de R$%.2f foi realizado com sucesso na conta %d", valordeposito, conta[i]);
        }
      }
    break;

    case 3: //Fazer saque
      printf("\nQual conta deseja sacar? ");
      scanf("%d", &contasaque);
      for(i=0; i<quantidadeconta; i++) 
      {
        if(contasaque == conta[i]) 
        {
          printf("\nQual valor deseja sacar? ");
          scanf("%f", &valorsaque);
          if(saldo[i] < valorsaque) 
          {
            printf("\n\nSaldo insuficiente!");
          } 
          else
          { 
            saldo[i] -= valorsaque;
            printf("\n\nVocê sacou R$%.2f reais! Seu novo saldo é R$%.2f", valorsaque, saldo[i]);
          break;
          }
        }
      }
    break;

    case 4: //Fazer transferência
      possuiConta = 0;
      printf("\nInforme a conta de origem: ");
      scanf("%d", &contaOrigem);
      for(i = 0; i < quantidadeconta; i++)
      {
        if(conta[i] == contaOrigem)
        {
          contaOrigem = i;
          break;
        }
        if(i == quantidadeconta-1)
        {
          possuiConta = 1;
        }
      }
      if(possuiConta == 1)
      {
        printf("Conta não encontrada");
        break;
      }
        possuiConta = 0;
        printf("\nQuanto deseja transferir? ");
        scanf("%f", &valorTransferencia);
      if(saldo[contaOrigem] - valorTransferencia < 0)
      {
        printf("\n\nVocê não possui saldo para realizar a tranferência");
      break;
      }
      printf("\nInforme a conta destino: ");
      scanf("%d", &contaDestino);
      for(i = 0; i < quantidadeconta; i++)
      {
        if(conta[i] == contaDestino)
        {
          contaDestino = i;
          break;
        }
        if(i == quantidadeconta-1){
          possuiConta = 1;
        }
      }
      if(possuiConta == 1)
      {
        printf("\nConta não encontrada");
        break;
      }
      saldo[contaOrigem] = saldo[contaOrigem] - valorTransferencia;
      saldo[contaDestino] = saldo[contaDestino] + valorTransferencia;
      printf("\n\nTransferencia realizada com sucesso");
    
    break;

    case 5: //Listar contas
      printf("\n\n======= Lista de contas =======");
      for(i=0; i<quantidadeconta; i++)
      {
        printf("\n\n%dª conta: %d\n", i+1, conta[i]);
      }
    break;

    case 6: //Consultar saldo
      printf("\n\n======= saldo de contas =======");
      for(i=0; i<quantidadeconta; i++)
      {
        printf("\n\n%dª conta: %d - Saldo: R$%.2f\n", i+1, conta[i],saldo[i]);
      }
    break;
  
    case 7:
      printf("\nCaixa encerrado.\n");
      return 0;
    break;

  default:
    printf("Opção inválida");
    break;
  }
}while (opcao != 7);
  return 0;
}