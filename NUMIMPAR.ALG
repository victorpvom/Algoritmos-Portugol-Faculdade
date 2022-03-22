Algoritmo "Numimpar"

Var
   C, N, CDIV: inteiro


Inicio
      C <- 1
      CDIV <- 0
      escreva ("Digite um número: ")
      leia (N)
      Repita
            Se (N % C = 0) entao
               CDIV <- CDIV + 1
            FimSe
            C <- C + 1
      Ate (C > N)
      Se (CDIV > 2) entao
         escreval ("O valor ", N, " não é impar!")
      senao
           escreval ("O valor ", N, " é impar!")
      FimSe
Fimalgoritmo