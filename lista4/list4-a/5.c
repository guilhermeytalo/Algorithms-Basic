
/*
5) Faça um programa que leia um vetor de 50 posições para números reais. 
Faça um menu com 3 opções. Zero, finaliza o programa, 1 calcula e mostra 
a média de todos os números armazenados no vetor e 2 mostra a soma dos 
números armazenados no vetor.
*/

#include <stdio.h>

int main(void)
{
  double numero;
  double sair = 0;
  double media = 0;
  double soma = 0;
  const int max = 50;
  int vetor[max];
  int i;
  int option;

  for(i = 0; i < max; i++)
  {
    printf("Digite o %d° valor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  while (i) 
  {
    printf("\n ________________");

    printf("\n Selecione uma das opção");
    printf("\n 1 - Somar Vetores");
    printf("\n 2 - Media dos Vetores");
    printf("\n 0 - Sair \n");
    scanf("%d", &option);
    getchar();
    
    if(option == 1)
    {
      soma = 0;
      for(i = 0; i < max; i++)
      {
        soma = soma + vetor[i];
      }
      printf("A soma dos elementos do vetor é %lf \n", soma);
    }
    else if (option == 2)
    {
      soma = 0;
      for(i = 0; i < max; i++)
      {
        soma = soma + vetor[i];
      }

      media = soma / max;
      printf("A media dos vetores é %.2lf \n", media);
    }
    else if (option == 0)
    { 
      printf("\nVocê saiu do programa!\n");
      return 0;
    }

  }
  
  return 0;
}