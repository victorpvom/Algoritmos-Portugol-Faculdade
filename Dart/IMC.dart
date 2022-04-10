import 'dart:io';
 
void main() {
 
double altura, sexo, peso;
 
stdout.write('Qual a sua altura? ');
altura = double.parse(stdin.readLineSync());
 
stdout.write('Qual o seu sexo? [1]MASCULINO [2]FEMININO ');
sexo = double.parse(stdin.readLineSync());
 
if (sexo == 1){
  peso = ((72.7 * altura)-58);
  print('O seu peso ideal é ' +peso.toString());
}
 else{
    peso = ((62.1 * altura)-44.7);
    print('O seu peso ideal é ' +peso.toString());
}
}