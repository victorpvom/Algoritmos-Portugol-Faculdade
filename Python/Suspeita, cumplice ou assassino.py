ask = ["Telefonou para a vítima? 1-(Sim) ou 0-(Não): ",
"Esteve no local do crime? 1-(Sim) ou 0-(Não): ",
"Esteve no local do crime? 1-(Sim) ou 0-(Não): ",
"Mora perto da vítima? 1(Sim) ou 0-(Não): ",
"Devia para a vitima? 1-(Sim) ou 0-(Não): "]
res = []
respostas_sim = 0

for i in range(len(ask)):
  print(ask[i])
  res.append(input())
  if res[i] == '1':
    respostas_sim = respostas_sim + 1

modo = ["Suspeita", "Cumplice", "Assassino"]

if respostas_sim ==2:
  print(modo[0])
elif respostas_sim == 3:
  print(modo[1])
elif respostas_sim == 4:
  print(modo[1])
elif respostas_sim == 5:
  print(modo[2])