Algoritmo "LerMatriz"

Var
   mat: vetor [1..3, 1..2] de inteiro
   l, c: inteiro


Inicio
      Para l <- 1 ate 3 faça
           Para c <- 1 ate 2 faça
                escreval ("Digite o valor da posição [", l, ",", c, "]: ")
                leia (mat[l,c])
           FimPara
      FimPara
      
      Para l <- 1 ate 3 faça
           Para c <- 1 ate 2 faça
                escreva (mat[l,c])
           FimPara
           escreval ()
      FimPara
           


Fimalgoritmo