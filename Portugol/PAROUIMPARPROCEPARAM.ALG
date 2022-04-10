Algoritmo "ParOuImparProceParam"

Var
N: inteiro

Procedimento ParOuImpar (V: inteiro)
inicio
      Se (V % 2 = 0) entao
         escreva ("O número", V," é PAR!")
      senao
           escreval ("O número", V," é IMPAR!")
      FimSe
FimProcedimento


Inicio
      escreval ("Digite um número: ")
      leia (N)
      ParOuImpar (N)


Fimalgoritmo