/*
4) Faça um programa de computador para calcular 
a área de um retângulo.
*/
#include <stdio.h>

int main(void)
{
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
