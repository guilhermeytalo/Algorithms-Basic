
/*
7) A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: 
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. 
Se um comerciante compra uma determinada quantidade de cada formato, 
faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

#include <stdio.h>

int main(void)
{
    double lata;
    double garrafaP;
    double garrafaG;
    float quantidade;
    
    // entrada de dados
    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%lf", &lata);
    printf("Digite a quantidade de garrafa de 600ml: ");
    scanf("%lf", &garrafaP);
    printf("Digite a quantidade de garrafa de 2L: ");
    scanf("%lf", &garrafaG);

    // processamento
    quantidade = (lata * 0.350) + (garrafaP * 0.600) + (garrafaG * 2);

    // saída
    printf("A quantidade em de refrigerante em litros é %.2lf litros \n", quantidade);

    return 0;
}