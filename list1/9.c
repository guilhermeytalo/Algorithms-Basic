/*
9) Pedrinho tem um cofrinho com muitas moedas, 
e deseja saber quantos reais conseguiu poupar. 
Faça um algoritmo para ler a quantidade de cada tipo de moeda, 
e imprimir o valor total economizado, em reais. Considere que existam moedas 
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. 
Não havendo moeda de um tipo, a quantidade respectiva é zero. 
*/

#include <stdio.h>

int main(void)
{
    double cents1;
    double cents5;
    double cents10;
    double cents25;
    double cents50;
    double real1;
    float moedas;
    
    // entrada
    printf("digite quantas moedas de 1 centavo você tem: ");
    scanf("%lf", &cents1);

    printf("digite quantas moedas de 5 centavos você tem: ");
    scanf("%lf", &cents5);

    printf("digite quantas moedas de 10 centavos você tem: ");
    scanf("%lf", &cents10);

    printf("digite quantas moedas de 25 centavos você tem: ");
    scanf("%lf", &cents25);

    printf("digite quantas moedas de 50 centavos você tem: ");
    scanf("%lf", &cents50);

    printf("digite quantas moedas de 1 real você tem: ");
    scanf("%lf", &real1);
    
    //processamento
    moedas = (cents1 * 0.01) + (cents5 * 0.05) + (cents10 * 0.10) + (cents25 * 0.25) + (cents50 * 0.50) + (real1 * 1);
    
    //saida  
    printf("A quantidade de moedas em real é %.2lf \n", moedas);
}