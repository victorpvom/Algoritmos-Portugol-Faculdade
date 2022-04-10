Algoritmo "TABUADA"

Var
   Cont, N, R: inteiro


Inicio
   Cont <- 1
  escreval ("Quer ver a tabuada de qual número?")
  leia (N)
   Repita
         R <- N * Cont
         escreval (N, " X ", Cont, " = ", R)
         Cont <- Cont + 1
   Ate (Cont > 10)
   

Fimalgoritmo