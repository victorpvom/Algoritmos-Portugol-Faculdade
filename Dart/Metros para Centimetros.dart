import 'dart:io';
 
void main() {
 
double n, cm;
 
stdout.write('Digite o valor em metros ');
n = double.parse(stdin.readLineSync());

cm = n*100;

print('O valor em centímetros é: ' +cm.toString());
}