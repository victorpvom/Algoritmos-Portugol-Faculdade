import 'dart:io';

void main() {

double num1, num2;

stdout.write('Digite o primeiro numero: ');
num1 = double.parse(stdin.readLineSync());

stdout.write('Digite o primeiro numero: ');
num2 = double.parse(stdin.readLineSync());

if (num1 == num2)
  print('Digite numeros diferentes');
  else
    if (num1 > num2)
      print('O maior número é ' +num1.toString());
    else
    print('O maior número é ' +num2.toString());
}