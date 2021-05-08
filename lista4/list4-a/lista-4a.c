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

/*
8) Leia um número indefinido de valores, 
sendo no mínimo 1 valor e no máximo 20 valores. 
Calcule a média dos valores lidos. 
Conte quantos desses valores são iguais ou acima da média.
*/

#include <stdio.h>

int main(void)
{
  const int max=20;
  float vetor[max];
  char opcao = '0';

//entrada de dados
 int i;
 
 for( i= 0;i < max; i++)
  {
    printf("Digite um numero: ");
    scanf("%f", &vetor[i]);
    
    printf("deseja continuar? s/n: ");
    getc(stdin);
    opcao = getc(stdin);

    if(opcao == 'n' || i==20){
      printf("\n");
      break;
    } 
  }

 float soma=0;

 for(int j = 0; j <= i; j++)
 {
   printf("%.2f \n", vetor[j]);
   soma+=vetor[j];
 }

 float media = soma /(i+1);

 printf("\nA média é = %.4f \n", media);
 printf("\n");
 
 for(int j=0; j <= i;j++){
   if (vetor[j] >= media){
     printf("O valor %.2f é acima da média\n",vetor[j]);
   }   
 }

  return 0;
}


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