#include <stdio.h>

int main(void)
{

    int cont = 0;
    int i = 0;
    int soma = 0;
    int num;
    float media;
    int contPos = 0;
    int contNeg = 0;
    int percPos = 0;
    int percNeg = 0;

    printf("Quantos valores serao adicionados: ");
    scanf("%d", &cont);
    printf("%d", cont);

    while (i < cont)
    {
        printf("Insira um valor:");
        scanf("%d", &num);
        soma = soma + num;

        if (num > 0)
        {
            contPos = contPos + 1;
        }
        else if (num < 0)
        {
            contNeg = contNeg + 1;
        }
        i++;
    }

    media = (soma / cont);
    percPos = (percPos / soma) * 100;
    percNeg = (percNeg / soma) * 100;

    printf("Media aritmetica: %.2f\n", media);
    printf("Quantidade de numeros positivos é %d\n", contPos);
    printf("Quantidade de numeros negativos é %d\n", contNeg);
    printf("Percentual de numeros positivos é %d\n", percPos);
    printf("Percentual de numeros negativos é %d\n", percNeg);

    return 0;
}