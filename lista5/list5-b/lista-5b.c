#include <stdio.h>

/* 
1)  Faça um programa que leia um vetor de números inteiros com 10 posições e tenha um menu que possibilite:

1 - Somar todos os elementos do vetor lido

2 - Calcular a média aritmética simples dos elementos do vetor

3 - Mostrar o maior valor

4 - Mostrar todos os elementos do vetor em ordem inversa da entrada de dados.

5 - Contar quantos elementos são pares e quantos são ímpares
*/


float verificaImPar(float *vetor, int max, int impar, int par){
  for(int i = 0; i < max; i++){
    if(vetor[i] / 2 != 0){
      impar += 1;
    }else{
      par += 1;

    }
  }
      printf("impar : %d\n", impar);
      printf("Par : %d\n", par);

  return 0;
}


float invertV(float *vetor, int max){
  for(int i = max-1; i >= 0; i--){
      printf("%.2f\n", vetor[i]);
    
  }
  return 0;
}



float maiorNum(float *vetor, int max, float maior){
  maior = vetor[1];
  for(int i = 0; i < max; i++){
    if(maior < vetor[i]){
      maior = vetor[i];
    }
  }
  printf("%.2f\n", maior);
  return 0;
}



float mediaSim(float *vetor, int max, float media, float soma){  
  for(int i = 0; i < max; i++){
    soma += vetor[i];
  }
    media = soma / max; 
  printf("%.2f\n",media);
  return 0;
}


float somaNum(float *vetor, int max){
  float soma = 0; // sempre inicia com 0 antes de dar +=
  for(int i = 0; i < max; i++){ 
    soma += vetor[i];
  }
  return soma;
}


float receDados(float *vetor, int max){
  for(int i = 0; i < max; i++){
    printf("Digite um numero:");
    scanf("%f", &vetor[i]);
  }
  return 0;
}

int menu( ){
  printf("1 - Somar todos os elementos do vetor lido\n");
  printf("2 - Calcular a média aritmética simples dos elementos do vetor\n");
  printf("3 - Mostrar o maior valor\n");
  printf("4 - Mostrar todos os elementos do vetor em ordem inversa da entrada de dados.\n");
  printf("5 - Contar quantos elementos são pares e quantos são ímpares\n");

  

  return 0;
}


int main(void) {
  int max = 5;
  int opc;
  float vetor[max];
  float soma;
  float media;
  float maior;
  int impar;
  int par;
  
  
  menu();
  
  printf("Qual sua escolha: ");
  scanf("%d", &opc);
  
  receDados(vetor, max);
  
  if(opc == 1){
    printf("%.2f\n", somaNum(vetor, max));
  }else if(opc == 2){
    mediaSim(vetor, max, media, soma);
  }else if(opc == 3){ 
    maiorNum(vetor, max, maior);
  }else if(opc == 4){
    invertV( vetor,  max);
  }else if(opc == 5){
    verificaImPar(vetor, max, impar, par);
  }else{
    printf("Opção invalida!!");
  }


  return 0;
}


/*
3) Ler uma matriz M 5 x 5, calcular e escrever as seguintes somas:

a) da linha 3 de M
b) da coluna 2 de M
c) da diagonal principal
d) da diagonal secundária
e) de todos os elementos da matriz
*/

#include <stdio.h>


float somaMatriz(int linhas, int colunas, float matriz[linhas][colunas]){
  float soma = 0;
  
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
        soma += matriz[i][j];

    }
  }
  printf("A soma de todos os elementos da matriz é %.2f\n", soma);

  return 0;
}



float somaDiaSec(int linhas, int colunas, float matriz[linhas][colunas]){
  float soma = 0;
 
  for(int i = 0; i < linhas; i++){
    soma += matriz[i][linhas - 1 - i];
  }

  printf("A soma da diagonal secundaria é %.2f\n", soma);

  return 0;
}




float somaDiaPrin(int linhas, int colunas, float matriz[linhas][colunas]){
  float soma = 0;
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if(i == j){
        soma += matriz[i][j];
      }
    }
  }
  printf("A soma da diagonal principal é %.2f\n", soma);

  return 0;
}



float somaLinha3(int linhas, int colunas, float matriz[linhas][colunas]){
  float soma = 0;
  for(int i = 0; i < linhas; i++){
    soma += matriz[3][i];
  }
  printf("A soma da linha 3 é %.2f\n", soma);

  return 0;
}

float somaColuna3(int linhas, int colunas, float matriz[linhas][colunas]){
  float soma = 0;
  for(int i = 0; i < linhas; i++){
    soma += matriz[i][2];
  }
  printf("A soma da coluna 2 é %.2f\n", soma);

  return 0;
}

float printMatriz(int linhas, int colunas, float matriz[linhas][colunas]){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("[%.f]", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}



float recebeDados(int linhas, int colunas, float matriz[linhas][colunas]){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("Digite seus numeros: ");
      scanf("%f", &matriz[i][j]);
    }
  }
  return 0;
}   

int main(void){
  
  int linhas = 5;
  int colunas = 5;

  float matriz[linhas][colunas];


  recebeDados(linhas, colunas, matriz);
  printMatriz(linhas, colunas, matriz);
  somaLinha3(linhas, colunas, matriz);
  somaColuna3(linhas, colunas, matriz);
  somaDiaPrin(linhas, colunas, matriz);
  somaDiaSec(linhas, colunas, matriz);
  somaMatriz(linhas, colunas, matriz);



  return 0;
}


#include <stdio.h>
/*
4) Faça uma função que receba uma matriz A[10][10] e realize as seguintes trocas:

a linha 2 com a linha 8;

a coluna 4 com a coluna 10;

a diagonal principal com a secundária;

a linha 5 com a coluna 10;
*/
float trocaL5_C10(int linhas, int colunas, float matriz[linhas][colunas]){
  float aux[10][10];
  for(int i = 0; i < linhas; i++){
      aux[0][i] = matriz[5][i];
      matriz[5][i] = matriz[i][10]; 
      matriz[i][10] = aux[0][i];
  
  }
  printf("Linas 5 com a coluna 10!\n");

  for(int i = 0; i < colunas; i++){
    printf("L[5][%.2f] C[10][%.2f]\n0", matriz[5][i], matriz[i][10]);
  }


  return 0;
}

float trocaDp_Ds(int linhas, int colunas, float matriz[linhas][colunas]){
  float aux[10][10];
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if(i == j){
          aux[0][i] = matriz[i][j];
        matriz[i][j] = matriz[i][colunas - 1 - j]; 
        matriz[i][colunas - 1 - i] = aux[0][i];
        }
    }
  }
  printf("A troca das diagonais!\n");
  for(int i = 0; i < colunas; i++){
    for(int j = 0; j < colunas; j++){
      printf("[Pri][%.2f] [Sec][%.2f]\n0", matriz[i][j], matriz[i][colunas - 1 -i]);
    }  
    printf("\n");
  }


  return 0;
}






float trocaC4_10(int linhas, int colunas, float matriz[linhas][colunas]){
  float aux[10][10];
  for(int i = 0; i < linhas; i++){
      aux[0][i] = matriz[i][4];
      matriz[i][4] = matriz[i][10]; 
      matriz[i][10] = aux[0][i];
  
  }
  printf("Coluna 4 com a coluna 10!\n");

  for(int i = 0; i < colunas; i++){
    printf("[4][%.2f] [10][%.2f]\n0", matriz[i][4], matriz[i][10]);
  }


  return 0;
}



float trocaL2_8(int linhas, int colunas, float matriz[linhas][colunas]){
  float aux[10][10];
  for(int i = 0; i < colunas; i++){
      aux[0][i] = matriz[2][i];
      matriz[2][i] = matriz[8][i]; 
      matriz[8][i] = aux[0][i];
  
  }
  printf("Linha 2 com a linha 8!\n");
  for(int i = 0; i < colunas; i++){
    printf("[2][%.2f] [8][%.2f]\n0", matriz[2][i], matriz[8][i]);
  }


  return 0;
}




float recebeDados(int linhas, int colunas, float matriz[linhas][colunas]){
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("Digite um numero: ");
      scanf("%f", &matriz[i][j]);
    }
  }
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("[%.f]",matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}




int main(void) {
  int linhas = 10;
  int colunas = 10;
  float matriz[linhas][colunas];


  recebeDados(linhas, colunas, matriz);
  trocaL2_8(linhas, colunas, matriz);
  trocaC4_10(linhas, colunas, matriz);

  return 0;
}