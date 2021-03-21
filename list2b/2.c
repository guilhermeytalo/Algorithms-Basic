/*
2) Elabore um algoritmo (e programa em C) que calcule o que deve ser pago por 
um produto, considerando o preço normal de etiqueta e a escolha da condição 
ppppppppde pagamento. 
Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida 
e efetuar o cálculo adequado.

Código -  Condição de pagamento

1 -  À vista em dinheiro ou cheque, recebe 15% de desconto

2 - À vista no cartão de crédito, recebe 10% de desconto

3 - Em duas vezes, preço normal de etiqueta sem juros

4 - Em 3 vezes, preço normal de etiqueta mais juros de 5%
*/

#include <stdio.h>

int main(void)
{
    float price;
    int selectedOpt;

    printf("Digite o valor do produto: \n");
    scanf("%f", &price);

    printf("Selecione uma forma de pagamento a seguir: \n\n");
    printf("1 -  À vista em dinheiro ou cheque, recebe 15%% de desconto \n");
    printf("2 - À vista no cartão de crédito, recebe 10%% de desconto \n");
    printf("3 - Em duas vezes, preço normal de etiqueta sem juros \n");
    printf("4 - Em 3 vezes, preço normal de etiqueta mais juros de 5%% \n");
    scanf("%d", &selectedOpt);

    switch (selectedOpt)
    {
    case 1:
        price = price - (price * 0.15);
        printf("À vista em dinheiro ou cheque, com 15%% de desconto é: %.2lf \n", price);
        break;
    case 2:
        price = price - (price * 0.10);
        printf("À vista no cartão de crédito, com 10%% de desconto é: %.2lf \n", price);
        break;
    case 3:
        printf("Em duas vezes o preço normal de etiqueta sem juros é: %.2lf \n", price);
        break;
    case 4:
        price = price + (price * 0.5);
        printf("Em 3 vezes o preço normal de etiqueta mais juros de 5%% é: %.2lf \n", price);
        break;
    default:
        printf("Opção selecionada invalida! \n");
        break;
    }
    return 0;
}