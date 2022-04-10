Algoritmo "semnome"

Var
D: inteiro
Valor: real

Inicio
    escreval ("---------------------------------")
    escreval ("        CRIANÇA ESPERANÇA        ")
    escreval ("---------------------------------")
    escreval (" MUITO OBRIGADO POR AJUDAR ")
    escreval (" [1] para doar R$ 10 ")
    escreval (" [2] PARA DOAR R$ 25 ")
    escreval (" [3] para doar R$ 50 ")
    escreval (" [4] para doar outros valores ")
    escreval (" [5] para cancelar ")
    leia (D)
    Escolha (D)
            Caso 1
              Valor <- 10
            Caso 2
              Valor <- 25
            Caso 3
              Valor <- 50
            Caso 4
              escreva ("Qual o valor da doação? R$ ")
              leia (Valor)
            Caso 5
              Valor <- 0
    FimEscolha
    escreval ("------------------------------------")
    escreval (" SUA DOAÇÃO FOI DE R$", Valor)
    escreval ("------------------------------------")
    
Fimalgoritmo