/*
    2) Escreva um programa lê um número indeterminado de valores reais, 
    encontra o maior e o menor deles e mostra o resultado. 
    Ao final, mostre também quantos valores foram lidos.
*/

#include <stdio.h>

int main(void)
{
    int valorMenor = 0;
    int valorMaior = 0;
    int value = 0;
    int i = 1;
    char option = 's';

        printf("Digite o primeiro inteiro: ");
        scanf("%d", &value);

        valorMaior = value;
        valorMenor = value;
    do
    {
        printf("Digite um valor inteiro: ");
        scanf("%d", &value);

        printf("valor menor é : %d \n", valorMenor);
        printf("valor maior é : %d \n", valorMaior);

        printf("Deseja digitar mais um valor? s ou n: ");
        getc(stdin);
        option = getc(stdin);

        if (value > valorMaior)
        {
            valorMaior = value;
        }
        else if (value < valorMenor)
        {
            valorMenor = value;
        }

        i++;
    } while (option != 'n' && option != 'N');

    printf("O valor maior encontrado é: %d \n", valorMaior);
    printf("O valor menor encontrado é: %d \n", valorMenor);
    printf("A quantidade de valores lidos foram: %d \n", i);
}



/*
4) Chico tem 1,50 metro e cresce 2 centímetros por ano, 
enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
Construa um algoritmo que calcule e imprima quantos anos 
serão necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>

int main(void)
{
    float cAltura = 1.5;
    float zAltura = 1.1;
    int year = 0;

    while(cAltura >= zAltura) {
        cAltura += 0.02;
        zAltura += 0.03;
        year++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.", year);
}


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


/*
6) Foi feita uma pesquisa entre os habitantes de uma região. 
Foram coletados os dados de idade, sexo (M/F) e salário. 
Faça um algoritmo que informe:

a) a média de salário do grupo;

b) maior e menor idade do grupo;

c) quantidade de mulheres.

d) quantidade de homens.

e) maior e menor salários

Encerre a entrada de dados quando for digitada uma idade negativa. (não use vetores ou matrizes)

*/

#include <stdio.h>

int main(void)
{
    char sexo;

    int idade;
    int maiorIdade;
    int menorIdade;

    int qtdMulheres;
    int qtdHomens;
    int qtdHabitantes;

    float salario;
    float menorSalario = 999;
    float maiorSalario = 999;
    float somaSalario;

    idade = 0;
    maiorIdade = 0;
    menorIdade = 200;
    qtdMulheres = 0;
    qtdHomens = 0;
    qtdHabitantes = 0;
    somaSalario = 0;

    while (idade >= 0)
    {
        printf("Informe a idade do entrevistado: ");
        scanf("%d", &idade);

        if (idade < 0)
        {
            break;
        }

        getchar();
        printf("Informe o sexo do entrevistado send M (masculino) e F (feminino): ");
        scanf("%c", &sexo);

        printf("Informe o Salario R$: ");
        scanf("%f", &salario);

        if (sexo == 'f' || sexo == 'F')
        {
            qtdMulheres = qtdMulheres + 1;
        } 
        
        if (sexo == 'm' || sexo == 'M')
        {
            qtdHomens = qtdHomens + 1;            
        }
        

        if (salario >= 0)
        {
            somaSalario = somaSalario + salario;
            qtdHabitantes = qtdHabitantes + 1;
        }

        if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        
        if (idade < menorIdade)
        {
            menorIdade = idade;
        }

        if (salario < menorSalario)
        {
            menorSalario = salario;
        }
        
        if (salario > maiorSalario)
        {
            maiorSalario = salario;
        }
    }

     printf("\n\t --------Resultado da pesquisa-------- \n");
     printf("\n Media dos salarios do grupo: R$ %.1f \n",(somaSalario / qtdHabitantes));
     printf(" Menor idade: %d anos \n",menorIdade);
     printf(" Maior idade: %d anos \n",maiorIdade);
     printf(" A quantidade de mulheres na regiao: %d \n", qtdMulheres);
     printf(" A quantidade de homens na regiao: %d \n", qtdHomens);
     printf("\n o menor salario, foi : %.2f \n",menorSalario);
     printf("\n o maior salario, foi : %.2f \n",maiorSalario);
    
    return 0;
}


/*
9) Foi realizada uma pesquisa de algumas características físicas da população de um certa região. 
Foram entrevistadas 500 pessoas e coletados os seguintes dados:
a- sexo: M (masculino) e F (feminino)
b- cor dos olhos: A (azuis), V (verdes) e C (castanhos)
c- cor dos cabelos: L (louros), C (castanhos) e P (pretos)
d- idade
Deseja-se saber:
a maior idade do grupo
a quantidade de indivíduos do sexo feminino, 
cuja idade está entre 18 e 35 anos e que tenham olhos verdes e cabelos louros.
qual a porcentagem de pessoas com olhos castanhos
*/





