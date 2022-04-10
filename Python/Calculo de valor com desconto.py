
print("Bem vindo\n")
valor_produto = float(input("Quanto custa o produto? \n"))
desconto = float(input("Qual é o valor do desconto? \n"))

p_final = valor_produto -((valor_produto*desconto)/100)


print('Você recebeu um desconto de {}%'.format(desconto))
print('Valor total é R$ {:.2f} reais'.format(p_final))