tamanhototal = int(input("Qual o tamanho total da área a ser pintada em metros quadrados?\n"))

capacidade = 3
preco = 80
litros = tamanhototal/capacidade
qtdlatas = 0

if tamanhototal % 54 == 1:
  qtdlatas = int(tamanhototal/54)
else:
  qtdlatas = int(tamanhototal/54)+1

print("Você utilizará {} latas" .format(qtdlatas))
print("Você gastará R${} reais" .format(qtdlatas*80))