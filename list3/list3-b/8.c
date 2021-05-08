#include <stdio.h>

int main(void)
{

    int num;
    int i = 0;
    int idade = 0;
    int cont = 0;
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont5 = 0;
    double perc1 = 0;
    double perc2 = 0;
    double perc3 = 0;
    double perc4 = 0;
    double perc5 = 0;

    // entrada processamento e saída
    do
    {
        cont++;
        printf("Digite a idade:");
        scanf("%d", &idade);

        if (idade > 0 && idade <= 17)
        {
            cont1 = cont1 + 1;
        }
        else if (idade > 18 && idade < 35)
        {
            cont2 = cont2 + 1;
        }
        else if (idade >= 35 && idade < 50)
        {
            cont3 = cont3 + 1;
        }
        else if (idade >= 50 && idade < 65)
        {
            cont4 = cont4 + 1;
        }
        else if (idade >= 65)
        {
            cont5 = cont5 + 1;
        }

    } while (idade != -1);
    {
        perc1 = (100 * cont1) / cont;
        perc1 = 100 - perc1;

        perc2 = (100 * cont2) / cont;
        perc2 = 100 - perc2;

        perc3 = (100 * cont3) / cont;
        perc3 = 100 - perc3;

        perc4 = (100 * cont4) / cont;
        perc4 = 100 - perc4;

        perc5 = (100 * cont5) / cont;
        perc5 = 100 - perc5;

        printf("0-17 %.lf\n", perc1);
        printf("18-35 %.lf\n", perc2);
        printf("35-50 %.lf\n", perc3);
        printf("50-65 %.lf\n", perc4);
        printf("65 %.lf\n", perc5);
    }
    return 0;
}