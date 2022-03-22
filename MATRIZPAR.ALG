Algoritmo "MatrizPar"

Var
   valores: vetor [1..3, 1..3] de inteiro
   l, c: inteiro


Inicio
      Para l <- 1 ate 3 faça
           Para c <- 1 ate 3 faça
                escreval ("Digite o valor da posição [", l, ",", c, "]:")
                leia (valores [l, c])
           FimPara
      FimPara
      
      Para l <- 1 ate 3 faça
           Para c <- 1 ate 3 faça
                Se (valores [l,c] % 2 = 0) entao
                   escreval ("{", valores[l,c] :2, "}")
                Senao
                     escreval (valores [l, c]:4:1)
                FimSe
           FimPara
           escreval ()
      FimPara


Fimalgoritmo