import 'dart:io';
 
void main() {
 
double area, raio, pi;

pi = 3.14;
 
stdout.write('Qual é o raio do circulo? ');
raio = double.parse(stdin.readLineSync());

area = ((raio*raio)*pi);

print('A area do quadrado é: ' +area.toString());
}