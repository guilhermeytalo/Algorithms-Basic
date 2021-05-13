#include <stdio.h>

/*
1) Faça uma algoritmos e o programa em C que lê uma matriz com 
4 linhas e 3 colunas e imprime, 
em formato de matriz, a matriz 
lida e a soma dos seus elementos.
*/

int main(void)
{
  const int linhas = 4;
  const int colunas = 3;

  int m[linhas][colunas];

  int soma[linhas][colunas];

  int i;
  int j;

  // entrada
  for (i = 0; i < linhas; i++)
  {
    for (j = 0; j < colunas; j++)
    {
      printf("digite o valor para o elemento [%i][%i] : ", i, j);
      scanf("%i", &m[i][j]);
    }
    printf("\n");
  }

  //processamento
  for (i = 0; i < linhas; i++)
  {
    for (j = 0; j < colunas; j++)
    {
      soma[i][j] = m[i][j] + m[i][j];
    }
  }

  //saída
  for (i = 0; i < linhas; i++)
  {
    for (j = 0; j < colunas; j++)
    {
      printf("Elemento [%i][%i] = %i \n", i, j, soma[i][j]);
    }
    printf("\n");
  }
  return 0;
}