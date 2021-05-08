#include <stdio.h>

int main(void) 
{
    /*
      3) Faça um programa que preencha um vetor com 10 números reais, 
      calcule e mostre a quantidade de números negativos 
      e a soma dos números positivos desse vetor.
    */
    
    const int max = 10;
    int negativo;
    int positivo;
    int vetor[max];


    negativo = 0;
    positivo = 0;

    //entrada de dados e processamento
    for (int i = 0; i < max; i++)
    {
      printf("Digite um número inteiro: ");
      scanf("%d", & vetor[i]);

      if (vetor[i] < 0){
          negativo++;
      } else {
        positivo = positivo + vetor[i];
      }
    }

    // saída
    printf("\nA quantidade de numeros negaticos é %d \n", negativo);
    printf("A soma dos numeros positivos é %d \n", positivo);

  return 0;
}