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

/*
2) Elabore um algoritmo (e programa em C) que calcule o que deve ser pago por 
um produto, considerando o preço normal de etiqueta e a escolha da condição 
ppppppppde pagamento. 
Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida 
e efetuar o cálculo adequado.

Código -  Condição de pagamento

1 -  À vista em dinheiro ou cheque, recebe 15% de desconto

2 - À vista no cartão de crédito, recebe 10% de desconto

3 - Em duas vezes, preço normal de etiqueta sem juros

4 - Em 3 vezes, preço normal de etiqueta mais juros de 5%
*/

#include <stdio.h>

int main(void)
{
    float price;
    int selectedOpt;

    printf("Digite o valor do produto: \n");
    scanf("%f", &price);

    printf("Selecione uma forma de pagamento a seguir: \n\n");
    printf("1 -  À vista em dinheiro ou cheque, recebe 15%% de desconto \n");
    printf("2 - À vista no cartão de crédito, recebe 10%% de desconto \n");
    printf("3 - Em duas vezes, preço normal de etiqueta sem juros \n");
    printf("4 - Em 3 vezes, preço normal de etiqueta mais juros de 5%% \n");
    scanf("%d", &selectedOpt);

    switch (selectedOpt)
    {
    case 1:
        price = price - (price * 0.15);
        printf("À vista em dinheiro ou cheque, com 15%% de desconto é: %.2lf \n", price);
        break;
    case 2:
        price = price - (price * 0.10);
        printf("À vista no cartão de crédito, com 10%% de desconto é: %.2lf \n", price);
        break;
    case 3:
        printf("Em duas vezes o preço normal de etiqueta sem juros é: %.2lf \n", price);
        break;
    case 4:
        price = price + (price * 0.5);
        printf("Em 3 vezes o preço normal de etiqueta mais juros de 5%% é: %.2lf \n", price);
        break;
    default:
        printf("Opção selecionada invalida! \n");
        break;
    }
    return 0;
}

/*
3) Escreva um algoritmo que leia o RA, 
as 3 notas obtidas por um aluno nas 3 verificações 
e a média dos exercícios que fazem parte da avaliação, 
e calcule a média de aproveitamento, usando a fórmula:

MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7

A atribuição dos conceitos obedece a tabela abaixo. 
O algoritmo deve escrever o RA do aluno, suas notas, 
a média dos exercícios, a média de aproveitamento, 
o conceito correspondente e a mensagem 'Aprovado' 
se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.

Média de aproveitamento Conceito

>= 90               A

>= 75 e < 90        B

>= 60 e < 75        C

>= 40 e < 60        D

< 40                E
*/

#include <stdio.h>

int main(void)
{
    int ra;
    double n1;
    double n2;
    double n3;
    double me;
    double ma;

    printf("Digite o RA: \n");
    scanf("%d", &ra);

    printf("Digite a nota 1: \n");
    scanf("%lf", &n1);

    printf("Digite a nota 2: \n");
    scanf("%lf", &n2);

    printf("Digite a nota 3: \n");
    scanf("%lf", &n3);

    printf("Digite média dos exercícios: \n");
    scanf("%lf", &me);

    ma = (n1 + n2 * 2 + n3 * 3 + me)/7;

    if( ma >= 90){
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: A \n Aprovado \n", ra,n1,n2,n3,me,ma);
    } else if (ma >= 75 && ma < 90) {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: B \n Aprovado \n", ra,n1,n2,n3,me,ma);
    } else if (ma >= 60 && ma < 75) {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: C \n Aprovado \n", ra,n1,n2,n3,me,ma);
    } else if (ma >= 40 && ma < 60) {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: D \n Reprovado \n", ra,n1,n2,n3,me,ma);
    } else {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: E \n Reprovado  \n", ra,n1,n2,n3,me,ma);
    }

    return 0;
}

/*
4) 

Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. 


Caso sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos). 



(Este exercício vai misturar coisas da entrada de dados com o processamento. 
Preste atenção nisso, pois algumas vezes temos que adaptar a solução ao problema).
*/

#include <stdio.h>

char name[100];
int gender;
int married;
int timeMarried;

int main(void)
{
    printf("Digite seu nome: \n");
    scanf("%s", name);

    printf("Qual o seu gênero? sendo 1: Masculino e 2: Feminino: \n");
    scanf("%d", &gender);

    printf("Qual o seu estado civíl? sendo 1: Casado(a) e 2: Solteiro(a): \n");
    scanf("%d", &married);

    if (gender == 2 && married == 1)
    {
        printf("Quanto tempo de casada: \n");
        scanf("%d", &timeMarried);
        printf("Parabéns pelo(s) %d ano(s) de casada! \n", timeMarried);
    }
    else if (gender == 1 && married == 1)
    {
        printf("Parabéns pelo casamento! \n");
    }
    else if (gender == 1 && married == 2 || gender == 2 && married == 2)
    {
        printf("Aproveite! \n");
    }
    else
    {
        printf("Opção invalida \n");
    }
    return 0;
}


/*
5) Você viajou para os Estados Unidos e descobriu que 
lá a unidade de medida de temperatura é diferente da do Brasil. 
Para não ter que acessar um serviço na internet a todo o momento, 
nem fazer os cálculos manualmente, faça um algoritmo, e programa em C, 
que converte a temperatura informada para a temperatura na outra unidade 
de medida. Ou seja, se a temperatura for informada em Celsius o algoritmo 
deve fornecer a temperatura em Fahrenheit, já se a temperatura for fornecida
em Fahrenheit, o resultado deve ser em graus Celsius.  
AS fórmulas de conversão devem ser pesquisadas na internet.
*/

#include <stdio.h>

int main(void)
{
    double temperature;
    int type;
    
    printf(" Em que escala de temperatura você deseja converter: \n 1: Celsius para Fahrenheit: \n 2: Fahrenheit para Celsius: \n");
    scanf("%d", &type);

    printf("Digite a o valor da temperatura que deseja calcular: ");
    scanf("%lf", &temperature);
    
    if (type == 1)
    {
        temperature = (temperature * 9 / 5) + 32;
        printf("O valor da temperatura convertida de Celsius para Fahrenheit é: %.2lf \n", temperature);
    }
    else if (type == 2)
    {
        temperature = (temperature - 32) * 5 / 9;
        printf("O valor da temperatura convertida de Fahrenheit para Celsius é: %.2lf \n", temperature);
    }
    else
    {
        printf("Opção inválida");
    }
}

/*
6) De acordo com o calendário Gregoriano (implantado em 1582), 
um ano é bissexto se ele é múltiplo de 400 ou 
é múltiplo de 4 mas não de 100. 
Desenvolva um programa que receba um ano e imprima SIM se ele for bissexto e NAO caso contrário. 
Na entrada o ano deve ser maior que > 1582. 
Mais detalhes aqui: https://escolakids.uol.com.br/matematica/calculo-do-ano-bissexto.htm


*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    int year;

    printf("Digite um ano maior que 1582: \n");
    scanf("%d", &year);

    if(year%400 == 0 || year%4 == 0) {
        printf("Este é um ano Bisexto \n");
        
    } else 
    {
        printf("Não é um ano é Bisexto \n");
    }

    return 0;    
}

