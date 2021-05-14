#include <stdio.h>
// 1) Leia 2 números reais
// Faça um menu que execute as seguintes operações, com os números lidos e de acordo com a vontade do usuário.
// Some os números
// Subtraia do número maior o menor
// Multiplique os números
// Divida o maior número pelo menor e informe o resultado da divisão e se a divisão foi exata

float somaNumero(soma,num1, num2){
  soma = num1 + num2;
  return soma;
}

float subtrairM(sub, num1, num2){
  if(num1 > num2){
    sub = num1 - num2;
  }else{
    sub = num2 - num1;
  }
  return sub;
}

float multiplicar(mult, num1, num2){
  mult = num1 * num2;
  return mult;
}

float divisao(div, num1, num2){
  float resto1;
  float resto2;
  if(num1 > num2){
    div = num1 / num2;
    resto1 = num1 % num2;
  }else{
    div = num2 / num1;
    resto2 = num2 % num1;

  }
  if(resto1 == 0 || resto2 == 0){
    printf("Divisão exata!\n");
  }
  return div;
}


int main(void) {

  float num1 = 0;
  float num2 = 0;
  float soma = 0;
  float sub = 0;
  float mult = 0;
  float div = 0;

  printf("Digite um numero: ");
  scanf("%f", &num1);
  printf("Digite outro numero: ");
  scanf("%f", &num2);

  printf("\n");
  printf("A soma dos numeros é %.2f\n",somaNumero(soma,num1,num2));
  printf("A subtração é %.2f\n", subtrairM(sub,num1, num2));
  printf("A multiplicação é %.2f\n", multiplicar(sub,num1, num2));
  printf("A divisão é %.2f\n", divisao(div ,num1, num2));

  return 0;
}

#include <stdio.h>
/*
2) Faça um programa com duas funções que calculem um acréscimo e um desconto. 
Os parâmetros para as funções são valor e porcentagem. 
Ao informar os valores o usuário deve informar também que operação deve fazer.
*/

float pagarCar(valor, valorF){
  valorF = valor * 1.10;
  return valorF;
}

float pagarDi(valor, valorF){
  valorF = valor * 0.90;
  return valorF;
}



int main(void) {
  
  int opc = 0;
  float valor = 0;
  float valorF = 0;

  printf("1- Para pagar em dinheiro, tera desconto de 10%%\n2- Para pagar com o cartão, tera acrescimo de 10%%\n");
  printf("Digite qual meio de pagamento: ");
  scanf("%d", &opc);

  if(opc == 1){
    printf("Você escolheu a opção ""pagar em dinheiro!""\n");
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("O valor a ser pago é R$%.2f\n", pagarDi(valor, valorF));
  }else if(opc == 2){
    printf("Você escolheu a opção ""pagar com cartão!""\n");
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("O valor a ser pago é R$%.2f\n", pagarCar(valor, valorF));
  }


  return 0;
}

#include <stdio.h>

/*
3) Faça um programa que leia 3 números inteiros (uma função para ler os números). 
Envie esses números para outra função que  coloque em ordem crescente os números
e a terceira função que imprime esses números (já em ordem).
*/

float pedirNum(int *num, int tam){
  for(int i = 0; i < tam ; i++){
      printf("Digite um numero:");
      scanf("%d", &num[i]);
    }
      return 0;
}

int ordem(int *num, int temp, int tam){
  for(int j = 0; j < tam - 1; j++){
    for(int i = 0; i < tam - 1; i++){
      if(num[i] > num[i + 1]){
        temp = num[i];
        num[i] = num[i + 1];
        num[i + 1] = temp;
      }
    }
  }   
    return 0;
}

int mostrar(int *num, int temp, int tam){
  ordem(num, temp, tam);
  for(int i = 0; i < tam ; i++){
    printf("%d\n", num[i]);
  }
  return 0;
}


int main(void) {
  const long int tam = 3;
  int num[tam];
  int temp;

  pedirNum(num, tam);
  ordem(num, temp, tam);
  mostrar(num, temp, tam);

  return 0;
}

#include <stdio.h>
#include <math.h>
//  4)Refaça o programa do IMC, usando funções.

float recebeDados(double peso, double altura, double imc, int exp){
  printf("Digite seu peso: ");
  scanf("%lf", &peso);
  printf("Digite sua altura: ");
  scanf("%lf", &altura);
  imc = peso / (pow(altura, exp));
  return imc;
}


float verificaImc(double peso, double altura, double imc2, double exp){
  
  
  if(imc2 <= 18.5){
    printf("Abaixo do peso.\n");
  }else if(imc2 >= 18.6 && imc2 <= 24.9){
    printf("Peso ideal, Parabéns!!!\n");
  }else if(imc2 >= 25 && imc2 <= 29.9){
    printf("Levemente acima do peso.\n");
  }else if(imc2 >= 30 && imc2 <= 34.9){
    printf("%lf\n", imc2);
    printf("Obesidade grau 1.\n");
  }else if(imc2 >= 35 && imc2 <= 39.9){
    printf("Obesidade grau 2 (severa).\n");
  }else if(imc2 > 40){
    printf("Obesidade grau 3 (morbida).\n");
  }
  return 0;
}


int main(void) {
  
  double peso;  
  double altura;  
  double imc;
  double imc2;
  double exp = 2;



  imc2 = recebeDados(peso, altura, imc, exp);
  printf("%lf\n", imc2);
  verificaImc(peso,  altura, imc2, exp);
  return 0;
}

#include <stdio.h>

/*
5) Faça uma função que recebe a idade de um nadador por parâmetro e retorna ,
também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:
*/

int pegaDados(idade){
  printf("Digite sua idade:");
  scanf("%d", &idade);
  return idade;
}


int verificaCat(idade1){
  printf("%d\n", idade1);
  if(idade1 >= 5 && idade1 <= 7){
    printf("Categoria Infantil A!\n");
  }else if(idade1 >= 8 && idade1 <= 10){
    printf("Categoria Infantil B!\n");
  }else if(idade1 >= 11 && idade1 <= 13){
    printf("Categoria Juvenil A!\n");
  }else if(idade1 >= 14 && idade1 <= 17){
    printf("Categoria Juvenil B!\n");
  }else if(idade1 >= 18){
    printf("Categoria Adulto!\n");
  }
  return 0; 
}



int main(void) {
  int idade;
  int idade1;

  idade1 = pegaDados(idade);
  verificaCat(idade1);
  return 0;
}