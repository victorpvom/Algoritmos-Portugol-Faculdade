lista1 = ["Azul","Branco","Preto","Vermelho", "Verde", "Laranja"]
lista2 = ["Rosa", "Verde", "Amarelo", "Roxo", "Laranja"]
intersecao = set(lista1)
intersecao2 = set(lista2)
valor_intersecao = intersecao & intersecao2
diferenca = intersecao - intersecao2
diferenca2 = intersecao2 - intersecao

print("A primeira lista é {}\n".format(lista1))
print("A segunda lista é {}\n".format(lista2))
print("*******************************************")

print("Os valores comuns às duas listas são: {}\n" .format(valor_intersecao))
print("Os valores que só existem na primeira lista: {}\n" .format(diferenca))
print("Os valores que existem apenas na segunda lista: {}\n" .format(diferenca2))
print("A primeira lista sem os elementos repetidos na segunda lista: {}\n" .format(diferenca))