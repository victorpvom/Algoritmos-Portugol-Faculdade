Algoritmo "APROREPT"

Var
nota: real


Inicio
escreval ("Digite uma nota ")
leia (nota)
Enquanto (nota < 0) ou (nota > 10) faça
         escreval ("Erro! A nota deve ser entre 0 e 10!")
         escreval ("Digite novamente a nota")
         leia (nota)
FimEnquanto
Se (nota >= 7) entao
   escreval ("Aluno APROVADO!")
   senao
   escreval ("Aluno REPROVADO!")
FimSe



Fimalgoritmo