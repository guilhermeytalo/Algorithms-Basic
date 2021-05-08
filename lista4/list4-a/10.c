/*
10) Faça um programa que leia 10 números inteiros e ordene esses números. 
Esses números deverão estar no próprio vetor ao término do processamento.
*/

#include <stdio.h>

int main(void)
{
  const int max = 5;
  int vetor[max];
  int i;
  int k;

  for(i = 0; i < max; i++)
  {
    printf("Digite um número inteiro: ");
    scanf("%d", & vetor[i]);
  }

  for(i = 0; i < max; i++)
  {
    for(int j = i + 1; j < max; j++)
    {
      if(vetor[i] > vetor[j])
      {
        int aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
      }
    }
  }

  for(k = 0; k < max; k++){
    printf("%d \n11", vetor[k]);
  }
  

  return 0;
}