Algoritmo "ValoresParesVetor"

Var
   val: vetor [1..7] de Inteiro
   i, TotPar: Inteiro

Inicio
      TotPar <- 0
      Para i <- 1 ate 7 faça
           escreval ("Digite o ", i, "o. valor: ")
           leia (val[i])
      FimPara
      
      Para i <- 1 ate 7 faça
           Se (val[i] % 2 = 0) entao
              TotPar<- TotPar + 1
              escreval ("O valor PAR na Posição ", i)
           FimSe
      FimPara
      escreval ("O total de pares foi ", TotPar)

Fimalgoritmo