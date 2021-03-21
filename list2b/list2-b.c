// Lista 2 - B

/*
1) O IMC – Indice de Massa Corporal é um critério da 
Organização Mundial de Saúde para dar uma indicação 
sobre a condição de peso de uma pessoa adulta. 
A fórmula é  imc = peso / (altura)² 
Com  o valor do IMC calculado o programa 
deve informar a condição . 
Use a tabela abaixo
*/
#include <stdio.h>


int main(void) {
  double altura;
  double peso;
  int imc;
  // entrada de dados
  printf("Digite seu peso: ");
  scanf("%lf", &peso);

  printf("Digite sua altura: ");
  scanf("%lf", &altura);

  imc = peso / (altura*altura);


  //processamento e saída
  if (imc < 18.5) {
    printf("Abaixo do peso");
  } else if (imc < 24.9) {   
    printf("Peso ideal");
  } else if (imc < 29.9) {
    printf("Levemente acima do peso");
  } else if (imc < 34.9) {
    printf("Obesidade grau 1");
  } else if (imc < 39.9) {
    printf("Obesidade grau 2");
  } else {
    printf("Obesidade grau 3");
  }
  
  return 0;
}



