#include <stdio.h>
/*
3) Não é possível dividir um número qualquer por 0 (zero). 
Deste modo, faça um programa de computador que divida um número por 
outro (dividendo e divisor), informados pelo usuário. 
Tomando o cuidado de verificar se o divisor não é igual a zero.
*/


int main(void)
{
    float divisor;
    float dividendo;
    float result;

    printf("Digite o valor do divisor:");
    scanf("%f", &divisor);
    printf("Digite o valor do dividendo:");
    scanf("%f", &dividendo) ;
    
    result = dividendo / divisor;
    
    if (result == 0){
        printf("Não é possivel dividir um numero por zero \n");
    } else {
        printf("O valor da divisão é: %.2f \n", result);
    }

    printf("%lf valor \n", divisor);
    printf("%lf valor \n", dividendo);

    return 0;
}
