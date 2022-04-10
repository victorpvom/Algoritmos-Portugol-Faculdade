import 'dart:io';
 
void main() {
 
double horas_trabalhadas, ganho_horas, salario;
 
stdout.write('Quanto você ganha por hora? ');
ganho_horas = double.parse(stdin.readLineSync());
 
stdout.write('Quantas horas você trabalhou no mês? ');
horas_trabalhadas = double.parse(stdin.readLineSync());
 
salario = horas_trabalhadas*ganho_horas;

print('Seu salário será: ' +salario.toString());
}