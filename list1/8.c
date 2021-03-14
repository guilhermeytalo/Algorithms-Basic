/*
8) Construa um algoritmo que 
tendo como dados de entrada 
dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a 
distância entre eles. 
A fórmula que efetua tal cálculo é:
*/
    #include <stdio.h>
    #include <math.h>

int main(void) 
{
    double x1;
    double x2;
    double y1;
    double y2;
    double d;
    float exp;

    exp = 2;

    // entrada de dados
    printf("digite o valor de x1: ");
    scanf("%lf", &x1);

    printf("digite o valor de x2: ");
    scanf("%lf", &x2);

    printf("digite o valor de y1: ");
    scanf("%lf", &y1);

    printf("digite o valor de y2: ");
    scanf("%lf", &y2);

    // processamento
    d = sqrt( (pow((x2 - x1), exp)) + pow((y2 - y1), exp));

    // saída
    printf("A distancia entre dois pontos quaisquer no plano é %.2lf \n", d);
    
    return 0;
}