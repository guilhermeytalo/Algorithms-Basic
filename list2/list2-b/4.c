/*
4) 

Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. 


Caso sexo seja “F” e estado civil seja “CASADA”, solicitar o tempo de casada (anos). 



(Este exercício vai misturar coisas da entrada de dados com o processamento. 
Preste atenção nisso, pois algumas vezes temos que adaptar a solução ao problema).
*/

#include <stdio.h>

char name[100];
int gender;
int married;
int timeMarried;

int main(void)
{
    printf("Digite seu nome: \n");
    scanf("%s", name);

    printf("Qual o seu gênero? sendo 1: Masculino e 2: Feminino: \n");
    scanf("%d", &gender);

    printf("Qual o seu estado civíl? sendo 1: Casado(a) e 2: Solteiro(a): \n");
    scanf("%d", &married);

    if (gender == 2 && married == 1)
    {
        printf("Quanto tempo de casada: \n");
        scanf("%d", &timeMarried);
        printf("Parabéns pelo(s) %d ano(s) de casada! \n", timeMarried);
    }
    else if (gender == 1 && married == 1)
    {
        printf("Parabéns pelo casamento! \n");
    }
    else if (gender == 1 && married == 2 || gender == 2 && married == 2)
    {
        printf("Aproveite! \n");
    }
    else
    {
        printf("Opção invalida \n");
    }
    return 0;
}
