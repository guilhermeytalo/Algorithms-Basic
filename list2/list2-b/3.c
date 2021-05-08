/*
3) Escreva um algoritmo que leia o RA, 
as 3 notas obtidas por um aluno nas 3 verificações 
e a média dos exercícios que fazem parte da avaliação, 
e calcule a média de aproveitamento, usando a fórmula:

MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7

A atribuição dos conceitos obedece a tabela abaixo. 
O algoritmo deve escrever o RA do aluno, suas notas, 
a média dos exercícios, a média de aproveitamento, 
o conceito correspondente e a mensagem 'Aprovado' 
se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E.

Média de aproveitamento Conceito

>= 90               A

>= 75 e < 90        B

>= 60 e < 75        C

>= 40 e < 60        D

< 40                E
*/

#include <stdio.h>

int main(void)
{
    int ra;
    double n1;
    double n2;
    double n3;
    double me;
    double ma;

    printf("Digite o RA: \n");
    scanf("%d", &ra);

    printf("Digite a nota 1: \n");
    scanf("%lf", &n1);

    printf("Digite a nota 2: \n");
    scanf("%lf", &n2);

    printf("Digite a nota 3: \n");
    scanf("%lf", &n3);

    printf("Digite média dos exercícios: \n");
    scanf("%lf", &me);

    ma = (n1 + n2 * 2 + n3 * 3 + me)/7;

    if( ma >= 90){
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: A \n Aprovado \n", ra,n1,n2,n3,me,ma);
    } else if (ma >= 75 && ma < 90) {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: B \n Aprovado \n", ra,n1,n2,n3,me,ma);
    } else if (ma >= 60 && ma < 75) {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: C \n Aprovado \n", ra,n1,n2,n3,me,ma);
    } else if (ma >= 40 && ma < 60) {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: D \n Reprovado \n", ra,n1,n2,n3,me,ma);
    } else {
        printf(" RA do aluno: %d \n Nota do aluno: \n Nota 1:%.2lf \n Nota 2: %.2lf \n Nota 3: %.2lf \n Média dos Exercícios %.2lf \n Média de Aproveitamento %.2lf com conceito: E \n Reprovado  \n", ra,n1,n2,n3,me,ma);
    }

    return 0;
}