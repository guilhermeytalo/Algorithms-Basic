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