import 'dart:io';
 
void main() {
 
int q1, q2, q3, q4, q5, result;
 
stdout.write('Telefonou para a vítima? [1]SIM [2]NÃO');
q1 = int.parse(stdin.readLineSync());

stdout.write('Esteve no  local do crime? [1]SIM [2]NÃO');
q2 = int.parse(stdin.readLineSync());

stdout.write('Mora perto da vitima? [1]SIM [2]NÃO');
q3 = int.parse(stdin.readLineSync());

stdout.write('Devia para a vitima? [1]SIM [2]NÃO');
q4 = int.parse(stdin.readLineSync());

stdout.write('Já trabalhou com a vítima? [1]SIM [2]NÃO');
q5 = int.parse(stdin.readLineSync());

result = q1+q2+q3+q4+q5;

if(result==8)
  print('Você é suspeito');

if(result==7)
  print('Você é cúmplice');

if(result==6)
  print('Você é cúmplice');

if(result==5)
  print('Você é assassino');

if(result==9)
  print('Você é Inocente');

if(result==10)
  print('Você é inocente');
}

