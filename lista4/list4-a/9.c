
/*
9) Escreva um algoritmo que leia um vetor com 100 números inteiros. 
Leia um número inteiro k. 
O algoritmo deve apresentar como resultado o número de ocorrências de k 
no vetor lido e em que posições (índices) ele ocorre.
*/

#include <stdio.h>

int main(void)
{
  const int max = 100;
  int vetor[max];
  int i;
  int k;
  int count = 0;

  k = 0;
  //entrada de dados
  for(i = 0; i < max; i++)
  {
    printf("Digite um número inteiro: ");
    scanf("%d", & vetor[i]);
  }

  printf("\n");
  printf("Digite o valor de k: ");
  scanf("%d", &k);

  for(int j = 0; j < max; j++)
  {
    if(vetor[j] == k)
    {
      printf("A posição de k %d no vetor é %d \n", k, j);
      count++;
    }
  }

  printf("\n");
  printf("O numero de ocorrências de K no vetor lido é %d \n", count);

  return 0;
}