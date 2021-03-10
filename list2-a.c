// Lista 2 - A

/*
1) Escreva um programa que resolva o seguinte problema: uma cópia “xerox” 
custa R$ 0,25 por folha, mas acima de 100 folhas esse valor cai para R$ 0,20 
por unidade. Dado o total de cópias, informe o valor a ser pago.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  double copy;
  double copyQtd;

  // entrada de dados
  printf("Digite o número de cópias desejadas: ");
  scanf("%lf", &copyQtd);

  //processamento
  if (copyQtd >= 100) {
    copy =  copyQtd * 0.20;
    printf("A quantidade de cópias foi maior ou igual a 100 o valor a ser pago é: %.2lf", copy);
  } else {
    copy = copyQtd * 0.25;
    printf("A quantidade de cópias foi menor que 100 o valor a ser pago é: %.2lf", copy);
  }  
  
  return 0;
}

/*
2) Escreva um programa que calcule as raízes da equação do 2o grau; 
os valores de a, b e c são fornecidos pelo usuário. 
Use a fórmula de Bháskara.
*/

/*
3) Não é possível dividir um número qualquer por 0 (zero). 
Deste modo, faça um programa de computador que divida um número por 
outro (dividendo e divisor), informados pelo usuário. 
Tomando o cuidado de verificar se o divisor não é igual a zero.
*/


/*
4) Encontre o dobro de um número inteiro caso ele seja negativo, 
seu triplo caso seja positivo. Caso for zero, informe o usuário 
que é um número neutro ou nulo.
*/