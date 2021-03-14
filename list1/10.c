/*
10)  Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, 
calcule e mostre a comissão e o salário final do funcionário. 
*/
#include <stdio.h>

int main(void)
{
    double salario;
    double vendas;
    float salarioF;
    float comissions;

    // entrada
    printf("Digite o seu salário: ");
    scanf("%lf", &salario);

    printf("Digite o valor que você vendeu: ");
    scanf("%lf", &vendas);

    //processamento
    comissions =  (vendas * 4) / 100;
    salarioF = comissions + salario;

    //saida
    printf("O valor de comissão é %.2lf \n", comissions);
    printf("O salário final é de %.2lf \n", salarioF);
}