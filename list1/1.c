#include <stdio.h>

/*
1) Faça um algoritmo que leia as 4 notas de um 
aluno e calcule a média aritmética 
simples deste aluno.
*/

int main(void)
{
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
    

    // entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    // processamento
    media = (n1 + n2 + n3 + n4) / 4;

    // Saída
    printf("A media do aluno é: %.1f \n", media);
    return 0;
}