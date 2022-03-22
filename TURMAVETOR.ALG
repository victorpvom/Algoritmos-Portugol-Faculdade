Algoritmo "TurmaVetor"

Var
nome: vetor [1..4] de caractere
n1: vetor [1..4] de real
n2: vetor [1..4] de real
m: vetor [1..4] de real
SM , MT : real
i, tot: inteiro

Inicio
      Para i <- 1 ate 4 faça
           escreval ("ALUNO ", I)
           escreval ("Nome: ")
           leia (nome[i])
           escreval ("Primeira Nota: ")
           leia (n1[i])
           escreval ("Segunda Nota: ")
           leia (n2[i])
           m[i] <- (n1[i] + n2[i]) / 2
           SM <- SM + m[i]
      FimPara
      MT <- SM /4
      LimpaTela
      escreval ("LISTAGEM DE ALUNOS")
      escreval ("------------------")
      Para i <- 1 ate 4 faça
           escreval (nome[i] : 15, m[i]:4:1)
                    Se (m[i] > MT) entao
                       Tot <- Tot + 1
                    FimSe
      FimPara
      escreval ("Ao todo temos ", tot, " alunos acima da média da turma que é ", MT:4:1)
Fimalgoritmo