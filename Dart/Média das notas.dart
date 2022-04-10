import 'dart:io';
 
void main() {

double ap1, ap2, ap3, ap4, media;

stdout.write('Qual a nota da AP1? ');
ap1 = double.parse(stdin.readLineSync());

stdout.write('Qual a nota da AP2? ');
ap2 = double.parse(stdin.readLineSync());

stdout.write('Qual a nota da AP3? ');
ap3 = double.parse(stdin.readLineSync());

stdout.write('Qual a nota da AP4? ');
ap4 = double.parse(stdin.readLineSync());

media = (ap1+ap2+ap3+ap4)/4;

print('Sua média é: ' +media.toString());
}