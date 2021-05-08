#include <stdio.h>

int main(void) 
{
  /*
    4) Faça um programa que leia um vetor de 10 posições 
    e verifique se existem valores iguais e os escreva na tela.
  */
    
  const int max = 10;
  int vetor[max];
  int i;

  //entrada de dados e processamento
  for (i = 0; i < max; i++)
  {
    printf("Digite um número inteiro: ");
    scanf("%d", & vetor[i]);
  }

 // saída
  for(i = 0; i < max; i++)
  {
    for(int j = 0; j < i; j++)
    {
      if(vetor[j] == vetor[i])
      {
        printf("\nO valor %d se repete\n", vetor[j]);
        break;
      }
    }
  }

  return 0;
}