Algoritmo "DetectorPesado"

Var
   I: inteiro
   N, Pesado: caractere
   P, Mai: real
   
Procedimento Topo ()
inicio
   LimpaTela
      escreval ("-------------------------------------")
      escreval (" D E T E C T O R  D E   P E S A D O  ")
      escreval (" Maior Peso até agora: ", Mai, "Kg")
      escreval ("-------------------------------------")

FimProcedimento


Inicio
      Topo ()
      Para I <- 1 ate 5 faça
           escreval ("Digite o nome: ")
           leia (N)
           escreval ("Digite o peso de ", N, ": ")
           leia (P)
           Se (P > Mai) entao
              MAI <- P
              Pesado <- N
           FimSe
           Topo ()
      FimPara
      Topo ()
      escreval ("A pessoa mais pesada foi ", Pesado, ", com ", Mai, " quilos.")

           


Fimalgoritmo