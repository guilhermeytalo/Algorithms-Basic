#include <stdio.h>
#include <math.h>
/*
4) Encontre o dobro de um número inteiro caso ele seja negativo, 
seu triplo caso seja positivo. Caso for zero, informe o usuário 
que é um número neutro ou nulo.
*/

int main(void)
{
    double num;
    double p2;
    double p3;

    p2 = 2;
    p3 = 3;
    
    printf("Digite um número: ");
    scanf("%lf", &num);


    if(num < 0) {
        num = pow(num, p2);
        printf("O Valor do numero digitado elevado ao dobro é: %.2lf", num);
    } else if(num > 0) {
        num = pow(num, p3);
        printf("O Valor do numero digitado elevado ao dobro é: %.2lf", num);
    } else {
        printf("número neutro ou nulo \n");
    }
}