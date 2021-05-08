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
    copy=  copyQtd * 0.25;
    printf("A quantidade de cópias foi menor que 100 o valor a ser pago é: %.2lf", copy);
  }  
  
  return 0;
}




/*
2) Escreva um programa que calcule as raízes da equação do 2o grau; 
os valores de a, b e c são fornecidos pelo usuário. 
Use a fórmula de Bháskara.
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x1;
    double x2;
    double b;
    double a;
    double c;
    double power;

    power = 2;

    printf("Digite o valor de a : ");
    scanf("%d", &a);

    printf("Digite o valor de b : ");
    scanf("%d", &b);

    printf("Digite o valor de c : ");
    scanf("%d", &c);

    x1 = -b + sqrt( pow(b, power) - 4 * a * c );
    x2 = -b - sqrt( pow(b, power) - 4 * a * c );

    printf("O valor de x1 é: ", x1);
    printf("O valor de x2 é: ", x2);

    return 0;
}

#include <stdio.h>
/*
3) Não é possível dividir um número qualquer por 0 (zero). 
Deste modo, faça um programa de computador que divida um número por 
outro (dividendo e divisor), informados pelo usuário. 
Tomando o cuidado de verificar se o divisor não é igual a zero.
*/


int main(void)
{
    float divisor;
    float dividendo;
    float result;

    printf("Digite o valor do divisor:");
    scanf("%f", &divisor);
    printf("Digite o valor do dividendo:");
    scanf("%f", &dividendo) ;
    
    result = dividendo / divisor;
    
    if (result == 0){
        printf("Não é possivel dividir um numero por zero \n");
    } else {
        printf("O valor da divisão é: %.2f \n", result);
    }

    printf("%lf valor \n", divisor);
    printf("%lf valor \n", dividendo);

    return 0;
}


#include <stdio.h>
#include <math.h>
/*
4) Encontre o dobro de um número inteiro caso ele seja negativo, 
seu triplo caso seja positivo. Caso for zero, informe o usuário 
que é um número neutro ou nulo.
*/

int main(void)
{
    double num;
    double p2;
    double p3;

    p2 = 2;
    p3 = 3;
    
    printf("Digite um número: ");
    scanf("%lf", &num);


    if(num < 0) {
        num = pow(num, p2);
        printf("O Valor do numero digitado elevado ao dobro é: %.2lf", num);
    } else if(num > 0) {
        num = pow(num, p3);
        printf("O Valor do numero digitado elevado ao dobro é: %.2lf", num);
    } else {
        printf("número neutro ou nulo \n");
    }
}
