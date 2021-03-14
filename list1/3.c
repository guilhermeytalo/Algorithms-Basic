#include <stdio.h>
#include <math.h>

/*
3) Faça um algoritmo que calcule a hipotenusa. 
Usar fórmula de Pitágoras.
*/



int main(void) {
    float hipotenusa;
    float cateto1;
    float cateto2;

    // entrada de dados
        printf("Informe o tamanho do primeiro cateto: ");
        scanf("%f", &cateto1);

        printf("Informe o tamanho do segundo cateto: ");
        scanf("%f", &cateto2);

    // processamento
        hipotenusa = sqrt( cateto1*cateto1 + cateto2*cateto2);

    // saída
        printf("O valor da hipotenusa é %4.2f \n",hipotenusa);
    
    return 0;
}

