#include <stdio.h>
#include <math.h>

int main(void)
{

    int num;
    double a;
    double b;
    double c;
    double hipotenusa;
    double x1;
    double x2;
    double delta;
    double raiz;
    double expo = 2;
    double rest = 0;
    double dividendo;
    double divisor;
    double resultado;
    int n;
    int contador;
    int fatorial;

    do
    {

        printf("1 - calcular a hipotenusa (Pitágoras).\n");
        printf("2 - calcular as raízes reais usando a fórmula de Bháskara.\n");
        printf("3 - calcular o resto de uma divisão de dois números reais.\n");
        printf("4 - calcule o fatorial de um número inteiro menor que 10.\n");
        printf("5 - sair do programa.\n");
        printf("Digite qual funcao voce quer: ");
        scanf("%d", &num);

        if (num == 1)
        {
            printf("1 - calcular a hipotenusa (Pitágoras).\n");
            printf("Digite um valor do cateto 1:");
            scanf("%lf", &a);
            printf("Digite um valor do cateto 2:");
            scanf("%lf", &b);

            c = pow(a, expo) + pow(b, expo);
            hipotenusa = sqrt(c);

            printf("A hipotenusa é %.2lf \n", hipotenusa);
        }
        else if (num == 2)
        {
            printf("2 - calcular as raízes reais usando a fórmula de Bháskara.\n");
            printf("Digite o valor de A: ");
            scanf("%lf", &a);
            printf("Digite o valor de B: ");
            scanf("%lf", &b);
            printf("Digite o valor de C: ");
            scanf("%lf", &c);

            delta = pow(b, expo) - 4 * a * c;

            if (delta < 0)
            {
                printf("Nao tem raiz negativa!! \n");
            }
            else
            {
                x1 = (-b + sqrt(delta)) / (2 * a);
                x2 = (-b - sqrt(delta)) / (2 * a);
                printf("O valor de X1 = %.2lf e de X2 = %.2lf \n", x1, x2);
            }
        }
        else if (num == 3)
        {
            printf("3 - calcular o resto de uma divisão de dois números reais.\n");
            printf("Digite o dividendo: ");
            scanf("%lf", &dividendo);
            printf("Digite o dividendo: ");
            scanf("%lf", &divisor);

            if (divisor == 0)
            {
                printf("Divisor é 0!! \n");
            }
            else
            {
                resultado = dividendo / divisor;
                printf("O resultado da divisao de %.2lf // %.2lf = %.0lf\n", dividendo, divisor, resultado);
            }
        }
        else if (num == 4)
        {
            printf("4 - calcule o fatorial de um número inteiro menor que 10. \n");
            printf("Digite um inteiro nao-negativo: ");
            scanf("%d", &n);
            fatorial = 1;
            contador = 2;

            while (contador <= n)
            {
                fatorial = fatorial * contador;
                contador = contador + 1;
            }
            printf("O valor de %d: %d \n", n, fatorial);
        }

    } while (num != 5);

    return 0;
}