/*
6) De acordo com o calendário Gregoriano (implantado em 1582), 
um ano é bissexto se ele é múltiplo de 400 ou 
é múltiplo de 4 mas não de 100. 
Desenvolva um programa que receba um ano e imprima SIM se ele for bissexto e NAO caso contrário. 
Na entrada o ano deve ser maior que > 1582. 
Mais detalhes aqui: https://escolakids.uol.com.br/matematica/calculo-do-ano-bissexto.htm


*/

#include <stdio.h>
#include <math.h>
int main(void)
{
    int year;

    printf("Digite um ano maior que 1582: \n");
    scanf("%d", &year);

    if(year%400 == 0 || year%4 == 0) {
        printf("Este é um ano Bisexto \n");
        
    } else 
    {
        printf("Não é um ano é Bisexto \n");
    }

    return 0;    
}