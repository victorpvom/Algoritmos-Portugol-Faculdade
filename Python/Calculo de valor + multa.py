peso = float(input("Qual o peso total?\n"))

excesso = peso - 40

multa = 0 

if excesso > 0:
  multa = 4*excesso
else:
  multa = "Não houve multa"

if multa == type(str):
  print(multa)
else: 
  print(multa)