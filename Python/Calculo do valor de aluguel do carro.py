km = float(input('Quantos km foram percorridos? '))
days = int(input('Quantos dias o carro esteve alugado: '))
diaria = 60*days
km_rodado = 0.15*km
valor_final = diaria + km_rodado
print('O aluguel do carro custará R$ {} reais!'.format(valor_final))