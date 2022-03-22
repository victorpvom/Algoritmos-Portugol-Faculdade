Algoritmo "SoComCVetor"

var
nome: caractere
soC: vetor [1..10] de caractere
c, tot: inteiro
inicio
      tot <- 0
      Para c <- 1 ate 10 faça
           escreval ("Digite seu nome: ")
           leia (nome)
           Se (copia(maiusc(nome), 1, 1) = "C") entao
              tot <- tot + 1
              soC[tot] <- nome
           FimSe
      FimPara
      
      LimpaTela
      escreval ("LISTAGEM FINAL")
      Para c <- 1 ate tot faça
           escreval (soC[c])
      FimPara
fimalgoritmo

