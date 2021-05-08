/*
7) Faça um programa que leia 50 números reais. 
Separe em novos vetores, os pares, os ímpares, 
os números primos. Imprima cada um dos vetores 
resultantes.
*/
#include <stdio.h>

int main(void)
{

  const int max = 5;
  int vetor[max];
  int vetorP[max];
  int vetorI[max];
  int vetorPar[max];

  int cont = 0;
  int contPar = 0;
  int contI = 0;
  int contPrimo = 0;
  int i = 0;
  int j = 0;
  int k = 0;

  for(i = 0; i < max; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }
  
  printf("\n");

  for(j = 0; j < max; j++)
  {
    if(vetor[j] % 2==0)
    {
      vetorPar[contPar] = vetor[j];
      contPar++;
    }
    else if(vetor[j] % 2!=0)
    {
      vetorI[contI] = vetor[j];
      contI++;
    }    
  }

  // checo se ele é primo
  for (int k=0;k<max;k++){
    
    int cont=1;

    for(int i=2;i<=vetor[k];i++)
    {
      if (vetor[k] % i==0)
      {
        cont++;
      }
    }

    if(cont <= 2)
    {
      vetorP[contPrimo] = vetor[k];
      contPrimo++;      
    }
  }

  printf("___________________________\n\n");
  for(int i = 0; i < contPar; i++)
  {
    printf("%i é par! \n", vetorPar[i]);
  }

  printf("___________________________\n\n");
  for(int i = 0; i < contI; i++)
  {
    printf("%i é impar! \n", vetorI[i]);
  }

  printf("___________________________\n\n");
  for(int i = 0; i < contPrimo; i++)
  {
    printf("%i é primo! \n", vetorP[i]);
  }

  return 0;
}