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