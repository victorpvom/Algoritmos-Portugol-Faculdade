print('Notas Bimestrais \n')
print('Qual sua nota do primeiro bimestre? \n')
nota1 = (float(input()))
print('Qual sua nota do segundo bimestre? \n')
nota2 = (float(input()))
print('Qual sua nota do terceiro bimestre? \n')
nota3 = (float(input()))
print('Qual sua nota do quarto bimestre? \n')
nota4 = (float(input()))

media = (nota1 + nota2 + nota3 + nota4)/4

print('Sua média final é: {:.1f} \n' .format(media))