/*
2) Escreva um programa lê um número indeterminado de valores reais, 
encontra o maior e o menor deles e mostra o resultado. 
Ao final, mostre também quantos valores foram lidos.
*/

#include <stdio.h>

int main(void)
{
    int valorMaior = 0;
    int valorMenor = 0;
    int value = 0;
    int i;
    char option = 's';

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &value);

    valorMaior = value;
    valorMenor = value;

    for (i = 1;option != 'n'; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &value);


        printf("Deseja digitar mais um valor? s ou n: ");
        getc(stdin);
        option = getc(stdin);

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
    printf("A quantidade de valores lidos foram: %d \n", i);
}
