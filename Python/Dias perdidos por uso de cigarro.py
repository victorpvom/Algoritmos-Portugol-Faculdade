cigarrosforday = int(input('Quantos cigarros você fuma por dia? \n'))
tempo = int(input('Há quantos anos você fuma? '))
qtd_cigarros = (tempo * 365)*cigarrosforday
timelost = (qtd_cigarros * 10)/24
if timelost <= 365:
  print('\nVoce perdeu {:.2f} dias de vida!'.format(timelost))
else:
  print('\nVoce perdeu {:.2f} dias de vida!'.format(timelost))
