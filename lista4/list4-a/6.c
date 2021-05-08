/*
6) Leia 2 vetores de tamanho igual (10 elementos), vetores A e B. 
Depois crie um terceiro vetor, C, também com 10 elementos e preencha com a 
soma dos outros vetores. Exemplo, soma o 1º elemento do vetor A,
com o 1º elemento do vetor B e grava a soma no 1º elemento do vetor C e 
assim sucessivamente. Imprima o vetor A, B e C
(usando apenas 1 laço de repetição).
*/

#include <stdio.h>

int main(void)
{
  const int max = 10;
  int vetorA[max];
  int vetorB[max];
  int vetorC[max];
  int i;
  
  
  // entrada e processamento
  for(i = 0; i < max; i++)
  {
    printf("Digite o %d° valor do vetor A: ", i+1);
    scanf("%d", &vetorA[i]);

    printf("Digite o %d° valor do vetor B: ", i+1);
    scanf("%d", &vetorB[i]);

    vetorC[i] = vetorA[i] + vetorB[i];
  }
  
  // Saída
  
  printf("___________________________ \n\nValores do vetor A + Valores do vetor B = Valores do vetor C \n");
  for (int i = 0; i < max; i++) {
    printf("vetorA [%d] = %d + vetorB [%d] = %d = vetor[%d] = %d \n", i, vetorA[i], i, vetorB[i], i, vetorC[i]);
  }

  return 0;
}