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
    copy=  copyQtd * 0.25;
    printf("A quantidade de cópias foi menor que 100 o valor a ser pago é: %.2lf", copy);
  }  
  
  return 0;
}