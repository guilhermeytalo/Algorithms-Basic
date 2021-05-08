#include <stdio.h>

int main(void) 
{

    /*
      2) Crie um programa que lê 10 valores inteiros e, 
      em seguida, multiplique por dois cada número e armazene no mesmo vetor.
      mostre na tela os valores resultantes em ordem inversa.
    */
    
    const int max = 10;

    int vetor[max];

    //entrada de dados e processamento
    for (int i = 0; i < max; i++)
    {
      printf("Digite um número inteiro: ");
      scanf("%d", & vetor[i]);

      vetor[i] *= 2;
    }

    // saída
    for (int i = (max - 1); i >= 0; i--) {
      printf("\nvetor[%d] = %d", i, vetor[i]);
    }
    
  return 0;
}