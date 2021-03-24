/*

5) Em uma eleição presidencial existem quatro candidatos. 
Os votos são informados através de códigos. 
Os dados utilizados para a contagem dos votos obedecem à seguinte codificação:
1,2,3,4 = voto para os respectivos candidatos;
5 = voto nulo;
6 = voto em branco;
Elabore um algoritmo (e faça o programa) que leia o código do candidato em um voto. Calcule e escreva:
total de votos para cada candidato;
total de votos nulos;
total de votos em branco;
O programa para quando for digitado um voto 0 (zero).
*/

#include <stdio.h>

int main(void)
{
    int value = 0;
    int cand1 = 0;
    int cand2 = 0;
    int cand3 = 0;
    int cand4 = 0;
    int nulo = 0;
    int branco = 0;

do
{
    printf(" Escolha um candidato sendo eles: 1, 2, 3 ou 4 \n 5 para nulo e 6 para branco \n Digite 0 para sair \n");
    
    scanf("%d", &value);

    if (value == 1)
    {
        cand1++;
    }
    else if (value == 2)
    {
        cand2++;
    }
    else if (value == 3)
    {
        cand3++;
    }
    else if (value == 4)
    {
        cand4++;
    }
    else if (value == 5)
    {
        nulo++;
    }
    else if (value == 6)
    {
        branco++;
    }
} while (value != 0);

    
    printf("Total de votos para cada candidato 1: %d \n", cand1);
    printf("Total de votos para cada candidato 2: %d \n", cand2);
    printf("Total de votos para cada candidato 3: %d \n", cand3);
    printf("Total de votos para cada candidato 4: %d \n", cand4);
    printf("Total de votos brancos: %d \n", nulo);
    printf("Total de votos nulos: %d \n", branco);
}
