print('Digite o máximo de caracteres \n')
max = int(input())

print('Digite o minimo de caracteres \n')
min = int(input())

print('Digite o nome \n')
nome = (input())

def validar_string(max,min, nome):
  if len(nome) <= max and len(nome) >= min:
    print("True")
  else:
    print("Falso")

validar_string(max,min, nome)