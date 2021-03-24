/*
1) Escreva um programa que lê 15 valores reais, 
encontra o maior e o menor deles e mostra o resultado.
*/

#include <stdio.h>

int main(void)
{
    int valorMaior;
    int valorMenor;
    int value;
    int i;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &value);

    valorMaior = value;
    valorMenor = value;

    for (i = 1; i <= 15; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &value);

        if (value > valorMaior)
        {
            valorMaior = value;
        }
        else if (value < valorMenor)
        {
            valorMenor = value;
        }
    }

    printf("O valor maior encontrado é: %d \n", valorMaior);
    printf("O valor menor encontrado é: %d \n", valorMenor);
}
