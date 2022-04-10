codigos = [100, 101, 102, 103, 104, 105]
pratos = ['Cachorro Quente', 'Bauru Simples', 'Bauru com ovo', 'Hamburguer', 'Chesseburguer', 'Refrigerante']
precos = [1.20, 1.30, 1.50, 1.20, 1.30, 1.0]
codigo = 0
quantidade = 0
pedido = []
total = 0
x = 1

print("Fechar comanda? Digite 1 para prosseguir")
x = int(input())

if (x == 1):
  while x == 1:

    print("Digite o código do produto")
    codigo = int(input())
    print("Quantos você consumiu do código {}?" .format(codigo))
    qtd = int(input())
    if (codigo == 100):
      codigo = 1.20
      pedido.append(1.20*qtd)
    elif (codigo == 101):
      codigo = 1.30
      pedido.append(1.30*qtd)
    elif (codigo == 102):
      codigo = 1.50
      pedido.append(1.50*qtd)
    elif (codigo == 103):
      codigo = 1.20
      pedido.append(1.20*qtd)
    elif (codigo == 104):
      codigo = 1.30
      pedido.append(1.30*qtd)
    elif (codigo == 105):
      codigo = 1
      pedido.append(1*qtd)
    x = int(input("Digite 1 para cadastrar outro prato ou 2 para finalizar\n"))

#print(pedido)

total = sum(pedido)
print("O valor a ser pago é R${}" .format(total))