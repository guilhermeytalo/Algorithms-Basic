

/*
2) Escreva um programa que calcule as raízes da equação do 2o grau; 
os valores de a, b e c são fornecidos pelo usuário. 
Use a fórmula de Bháskara.
*/

#include <stdio.h>
#include <math.h>

int main(void){
    double x1;
    double x2;
    double b;
    double a;
    double c;
    double power;

    power = 2;

    printf("Digite o valor de a : ");
    scanf("%d", &a);

    printf("Digite o valor de b : ");
    scanf("%d", &b);

    printf("Digite o valor de c : ");
    scanf("%d", &c);

    x1 = -b + sqrt( pow(b, power) - 4 * a * c );
    x2 = -b - sqrt( pow(b, power) - 4 * a * c );

    printf("O valor de x1 é: ", x1);
    printf("O valor de x2 é: ", x2);

    return 0;
}