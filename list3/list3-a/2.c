/*
    2) Escreva um programa lê um número indeterminado de valores reais, 
    encontra o maior e o menor deles e mostra o resultado. 
    Ao final, mostre também quantos valores foram lidos.
    */

#include <stdio.h>

int main(void)
{
    int valorMenor = 0;
    int valorMaior = 0;
    int value = 0;
    int i = 1;
    char option = 's';

        printf("Digite o primeiro inteiro: ");
        scanf("%d", &value);

        valorMaior = value;
        valorMenor = value;
    do
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &value);

        printf("valor menor é : %d \n", valorMenor);
        printf("valor maior é : %d \n", valorMaior);

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

        i++;
    } while (option != 'n' && option != 'N');

    printf("O valor maior encontrado é: %d \n", valorMaior);
    printf("O valor menor encontrado é: %d \n", valorMenor);
    printf("A quantidade de valores lidos foram: %d \n", i);
}
