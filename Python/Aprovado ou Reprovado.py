nota1 = float(input("Digite a primeira nota \n"))
nota2 = float(input("Digite a segunda nota \n"))
media = (nota1+nota2)/2

if media < 6.9:
  print("Reprovado")
elif media >= 7 and media < 9.9:
  print("Aprovado")
elif media == 10:
  print("Aprovado com distinção")
else:
  print("Valores incorretos")