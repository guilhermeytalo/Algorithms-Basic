#include <stdio.h>

int main(void) 
{

    /*
      1) Faça um programa que leia os dados para um vetor com 10 posições de inteiros. 
      
      Em seguida deverá ser impresso o maior e o menor elemento do vetor. 

      Separar em entrada de dados, processamento e saída (não pode misturar).
    */

    system("clear");
    const int max = 10;

    int maior;
    int menor;
    int vetor[max];

    //entrada de dados
    for (int i = 0; i < max; i++)
    {
      printf("Digite um número inteiro: ");
      scanf("%d", & vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];

    // processamento
    for (int i = 0; i < max; i++)
    {
      if(vetor[i] > maior) {
        maior = vetor[i];
      }
      if(vetor[i] < menor) {
        menor = vetor[i];
      }
    }
    
    // saída
    printf("\nO maior número do vetor é %d \n", maior);
    printf("O menor número no vetor é %d \n", menor);
    
  return 0;
}