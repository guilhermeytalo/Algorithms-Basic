#include <stdio.h>

int main(void)
{

    double maiorAlt;
    double menorAlt;
    double x = 1;
    double media = 0;
    double somaAlt = 0;
    int n = 0;

    // entrada
    printf("Digite uma altura ou para sair digite -1:\n");
    scanf("%lf", &x);

    maiorAlt = x;
    menorAlt = x;

    // processamento
    while (x != -1)
    {
        printf("Digite uma altura ou para sair digite -1:\n");
        scanf("%lf", &x);
        if (x > maiorAlt)
        {
            maiorAlt = x;
        }
        else if (x < menorAlt && x > 0)
        {
            menorAlt = x;
        }

        if (x >= 0)
        {
            somaAlt = somaAlt + x;
            n = n + 1;
        }
        printf(" aqui  = 0%lf", somaAlt);

        if (n >= 0)
        {
            media = somaAlt / n;
        }
    }

    // saída
    printf("A maior altura do grupo sera %.2lf\n", maiorAlt);
    printf("A menor altura do grupo sera %.2lf\n", menorAlt);
    printf("A media de altura é  %.2lf\n", media);

    return 0;
}