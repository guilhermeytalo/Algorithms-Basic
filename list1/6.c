/*
6) Faça um programa que calcule o preço de um 
produto à vista e a prazo. Informa-se o preço do produto e o 
programa calcula e mostra o preço do produto com desconto de 
10% e o preço do produto com acréscimo de 5%.
*/

#include <stdio.h>

int main(void)
{
    double valorProduto;
    double valorP;
    double valorA;

    // entrada de dados
    printf("insira o valor do produto: ");
    scanf("%lf", &valorProduto);

    // processamento
    valorA = valorProduto * 10 / 100;
    valorA = valorProduto - valorA;

    valorP = valorProduto * 5 / 100;
    valorP = valorProduto + valorP;
    
    // saída
    printf("O valor do produto à vista %.2lf \n", valorA);
    printf("O valor do produto a prazo é %.2lf \n", valorP);
}