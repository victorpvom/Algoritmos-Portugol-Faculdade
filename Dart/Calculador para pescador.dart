import 'dart:io';


void main(){

double peso, excedente, multa;
 
stdout.write('Quantos quilos você pescou? ');
peso = double.parse(stdin.readLineSync());

  if(peso > 50){
    excedente = peso - 50;
    multa = excedente * 4;
  print('\n Você ultrapassou:'+excedente.toString());
    print('\n Sua multa é de: '+multa.toString());
}  
}