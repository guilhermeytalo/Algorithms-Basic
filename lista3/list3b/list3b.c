/*
2) Desenvolver um algoritmo que leia a altura de N pessoas. Este programa deverá calcular e mostrar :

A menor altura do grupo;

A maior altura do grupo;

A média de altura

Finalizar o processamento ao digitar uma altura negativa
*/

/*
3) Desenvolver um algoritmo que leia um número não determinado de valores e 
calcule e escreva a média aritmética dos valores lidos, a quantidade de valores 
positivos, a quantidade de valores negativos e o percentual de valores negativos 
e positivos.
*/

#include <stdio.h>

int main(void) {
 
int cont = 0;
int i = 0;
int soma = 0;
int num;
float media;
int contPos = 0;
int contNeg = 0;
int percPos = 0;
int percNeg = 0;

printf("Quantos valores serao adicionados: ");
scanf("%d", &cont);
printf("%d", cont);


while(i < cont ){
  printf("Insira um valor:");
  scanf("%d", &num);
  soma = soma + num;
  
  if(num > 0){
    contPos = contPos + 1;
  }else if(num < 0){
    contNeg = contNeg + 1;
  }
  i++;
}

media = (soma/cont);
percPos =  (percPos / soma) *100;
percNeg =  (percNeg / soma) *100;

printf("Media aritmetica: %.2f\n",media);
printf("Quantidade de numeros positivos é %d\n", contPos);
printf("Quantidade de numeros negativos é %d\n", contNeg);
printf("Percentual de numeros positivos é %d\n", percPos);
printf("Percentual de numeros negativos é %d\n", percNeg);



  return 0;
}

/*
8) Faça um programa que leia as idades de N pessoas, ao final 
(com uma idade negativa) deve imprimir o percentual de pessoas 
considerando as faixas de idade: 0-17 anos, 18 a 35 anos, 
35 a 50 anos, 50 a 65 e maiores que 65 anos. Lembrete: 
a soma dos percentuais das faixas deve totalizar 100%.
*/

#include <stdio.h>

int main(void) {
  
  int num;
  int i = 0;
  int idade = 0;
  int cont = 0;
  int cont1 = 0;
  int cont2 = 0;
  int cont3 = 0;
  int cont4 = 0;
  int cont5 = 0;
  double perc1 = 0;
  double perc2 = 0;
  double perc3 = 0;
  double perc4 = 0;
  double perc5 = 0;

	// entrada processamento e saída
  do{
    cont ++;
    printf("Digite a idade:");
    scanf("%d", &idade);

    if(idade > 0 && idade <= 17){
      cont1 = cont1 + 1;

    }else if(idade > 18 && idade < 35){
      cont2 = cont2 + 1;

    }else if(idade >= 35 && idade < 50){
      cont3 = cont3 + 1;

    }else if(idade >= 50 && idade < 65){
      cont4 = cont4 + 1;

    }else if(idade >= 65){
      cont5 = cont5 + 1;

    }


  }while ( idade!= -1);
  {
    perc1 = (100 * cont1) / cont;
    perc1 = 100 - perc1;

    perc2 = (100 * cont2) / cont;
    perc2 = 100 - perc2;

    perc3 = (100 * cont3) / cont;
    perc3 = 100 - perc3;

    perc4 = (100 * cont4) / cont;
    perc4 = 100 - perc4;

    perc5 = (100 * cont5) / cont;
    perc5 = 100 - perc5;


  printf("0-17 %.lf\n", perc1);
  printf("18-35 %.lf\n", perc2);
  printf("35-50 %.lf\n", perc3);
  printf("50-65 %.lf\n", perc4);
  printf("65 %.lf\n", perc5);


  }
  return 0;
}

/*
9)  Crie um algoritmo (e depois programe em C) que ajude o DETRAN a saber, o total de recursos que foram arrecadados com a aplicação de multas de trânsito.

O algoritmo deve ler as seguintes informações para cada motorista:

-O número da carteira de motorista.

-Número de multas;

-Valor da cada uma das multas.

Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados (somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista que obteve o maior número de multas. 

*/

/*
10) Faça um programa com um menu de opções:

1 - calcular a hipotenusa (Pitágoras)

2 - calcular as raízes reais usando a fórmula de Bháskara

3 - calcular o resto de uma divisão de dois números reais. 

4 - calcule o fatorial de um número inteiro menor que 10

5 - sair do programa 
*/
#include <stdio.h>
#include <math.h>

int main(void)
{

    int num;
    double a;
    double b;
    double c;
    double hipotenusa;
    double x1;
    double x2;
    double delta;
    double raiz;
    double expo = 2;
    double rest = 0;
    double dividendo;
    double divisor;
    double resultado;
    int n;
    int contador;
    int fatorial;

    do
    {

        printf("1 - calcular a hipotenusa (Pitágoras).\n");
        printf("2 - calcular as raízes reais usando a fórmula de Bháskara.\n");
        printf("3 - calcular o resto de uma divisão de dois números reais.\n");
        printf("4 - calcule o fatorial de um número inteiro menor que 10.\n");
        printf("5 - sair do programa.\n");
        printf("Digite qual funcao voce quer: ");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("1 - calcular a hipotenusa (Pitágoras).\n");
            printf("Digite um valor do cateto 1:");
            scanf("%lf", &a);
            printf("Digite um valor do cateto 2:");
            scanf("%lf", &b);

            c = pow(a, expo) + pow(b, expo);
            hipotenusa = sqrt(c);

            printf("A hipotenusa é %.2lf \n", hipotenusa);
        }
        else if (num == 2)
        {
            printf("2 - calcular as raízes reais usando a fórmula de Bháskara.\n");
            printf("Digite o valor de A: ");
            scanf("%lf", &a);
            printf("Digite o valor de B: ");
            scanf("%lf", &b);
            printf("Digite o valor de C: ");
            scanf("%lf", &c);

            delta = pow(b, expo) - 4 * a * c;

            if (delta < 0)
            {
                printf("Nao tem raiz negativa!! \n");
            }
            else
            {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("O valor de X1 = %.2lf e de X2 = %.2lf \n", x1, x2);
            }
        }
        else if (num == 3)
        {
            printf("3 - calcular o resto de uma divisão de dois números reais.\n");
            printf("Digite o dividendo: ");
            scanf("%lf", &dividendo);
            printf("Digite o dividendo: ");
            scanf("%lf", &divisor);

            if (divisor == 0)
            {
                printf("Divisor é 0!! \n");
            }
            else
            {
                resultado = dividendo / divisor;
                printf("O resultado da divisao de %.2lf // %.2lf = %.0lf\n", dividendo, divisor, resultado);
            }
        }
        else if (num == 4)
        {
            printf("4 - calcule o fatorial de um número inteiro menor que 10. \n");
            printf("Digite um inteiro nao-negativo: ");
            scanf("%d", &n);
            fatorial = 1;
            contador = 2;

            while (contador <= n)
            {
                fatorial = fatorial * contador;
                contador = contador + 1;
            }
            printf("O valor de %d: %d \n", n, fatorial);
        }

    } while (num != 5);


    return 0;
}

