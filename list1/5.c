/*
5) Faça um programa que calcule quantas peças de piso 
são necessárias para um determinado ambiente. 

Deve-se informar as dimensões do ambiente em metros 
e o tamanho dos pisos em centímetros. 
Considere que é necessário um acréscimo de 10% na quantidade de 
pisos para que haja sobra para recortes.
*/

#include <stdio.h>

int main(void)
{
    double area;
    double piso;
    float result;
    // entrada de dados
    printf("Informe as dimensões do ambiente: ");
    scanf("%lf", &area);

    printf("Informe o tamanho dos pisos: ");
    scanf("%lf", &piso);

    // processamento
    result = area / ((piso * 0.10) / 100);
    
    // saída
    printf("A quantidade de peças de piso necessárias para o seu ambiente é de: %.2lf \n", result);

    return 0;
}