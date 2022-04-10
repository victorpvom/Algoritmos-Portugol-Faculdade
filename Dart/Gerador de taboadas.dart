import 'dart:io';

void main(){

int tabuada, contador, tabuada_pronta;

stdout.write('Digite o número da taboada: ' );
tabuada = int.parse(stdin.readLineSync());
  
for(int contador = 1; contador<=10; contador++){
  tabuada_pronta = tabuada * contador;
  print('$tabuada x  $contador = $tabuada_pronta');

  }
      
} 