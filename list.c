## Lista 1

### Exercício 1:
/*
1) Faça um algoritmo que leia as 4 notas de um 
aluno e calcule a média aritmética 
simples deste aluno.
*/

#include <stdio.h>

int main(void) {
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
    double d;

    // entrada de dados
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);

        printf("Digite a segunda nota: ");
        scanf("%f", &n2);

        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        printf("Digite a quarta nota: ");
        scanf("%f", &n4);

        // processamento
        media = (n1 + n2 + n3 + n4) / 4;

        // Saída
        printf("A media do aluno é: %.1f \n", media);
    return 0;

}

### Exercício 2:
/*
2) Escreva o algoritmo que é usado para 
fazer uma multiplicação manualmente. 
(exercício para ser feito no papel).
*/

### Exercício 3:
/*
3) Faça um algoritmo que calcule a hipotenusa. 
Usar fórmula de Pitágoras.
*/

#include <stdio.h>
#include <math.h>


int main(void) {
    float hipotenusa;
    float cateto1;
    float cateto2;

    // entrada de dados
        printf("Informe o tamanho do primeiro cateto: ");
        scanf("%f", &cateto1);

        printf("Informe o tamanho do segundo cateto: ");
        scanf("%f", &cateto2);

    // processamento
        hipotenusa = sqrt( cateto1*cateto1 + cateto2*cateto2);

    // saída
        printf("O valor da hipotenusa é %4.2f \n",hipotenusa);
    
    return 0;
}

### Exercício 4:
/*
4) Faça um programa de computador para calcular 
a área de um retângulo.
*/

#include <stdio.h>


int main(void) {
    float b = 0;
    float h = 0;
    float a = 0;

    // entrada de dados
        printf("Digite o valor da base: ");
        scanf("%f", &b);
    
        printf("Digite o valor da altura: ");
        scanf("%f", &h);

    // processamento
        a = b * h;

    // saída
        printf("O valor da altura é: %.1f M² \n", a);

    return 0;
}


### Exercício 5:
/*
5) Faça um programa que calcule quantas peças de piso 
são necessárias para um determinado ambiente. 
Deve-se informar as dimensões do ambiente em metros 
e o tamanho dos pisos em centímetros. 
Considere que é necessário um acréscimo de 10% na quantidade de 
pisos para que haja sobra para recortes.
*/

### Exercício 6:
/*
6) Faça um programa que calcule o preço de um 
produto à vista e a prazo. Informa-se o preço do produto e o 
programa calcula e mostra o preço do produto com desconto de 
10% e o preço do produto com acréscimo de 5%.
*/


### Exercício 7:
/*
7) A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: 
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. 
Se um comerciante compra uma determinada quantidade de cada formato, 
faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/


### Exercício 8:
/*
8) Construa um algoritmo que, tendo como dados de entrada dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a distância entre eles. A fórmula que efetua tal cálculo é:
*/


### Exercício 9:
/*
9) Pedrinho tem um cofrinho com muitas moedas, 
e deseja saber quantos reais conseguiu poupar. 
Faça um algoritmo para ler a quantidade de cada tipo de moeda, 
e imprimir o valor total economizado, em reais. Considere que existam moedas 
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. 
Não havendo moeda de um tipo, a quantidade respectiva é zero. 
*/


### Exercício 10:
/*
10)  Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, 
calcule e mostre a comissão e o salário final do funcionário. 
*/


##Lista 2

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


#include <stdio.h>
#include <math.h>

/*
1) Escreva um programa que resolva o seguinte problema: uma cópia “xerox” 
copy = R$ 0,25 por copy, 
mas acima de 100 copyNumber 
copy = R$ 0,20 
por unidade. Dado o total de cópias, informe o valor a ser pago.
*/

int main(void) {
  double copy;
  double copyQtd;
  char resposta[20];
  // entrada de dados
  printf("Digite o número de cópias desejadas: ");
  scanf("%lf", &copyQtd);

  //processamento e saída
  if (copyQtd >= 100) {
    copy =  copyQtd * 0.20;
    // strcpy(resposta,  "A quantidade de cópias foi maior ou igual a 100 o valor a ser pago é: %.2lf"), copy;
    printf("A quantidade de cópias foi maior ou igual a 100 o valor a ser pago é: %.2lf", copy);
  } else {
    copy = copyQtd * 0.25;
    printf("A quantidade de cópias foi menor que 100 o valor a ser pago é: %.2lf", copy);
  }  
  
  // printf("%s", resposta);
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
