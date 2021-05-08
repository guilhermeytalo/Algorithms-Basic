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