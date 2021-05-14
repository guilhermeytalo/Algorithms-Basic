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


#include <stdio.h>
// 2) Desenvolva um algoritmo que leia uma matriz 5x5. Em seguida faça:

// a) Troque os elementos da linha 3 pela linha 5 e vice-versa.

// b) Troque os elementos da linha 3 pela coluna 3 e vice-versa.

// c) Troque os elementos da diagonal principal com a diagonal secundária e vice-versa

// (explicação em vídeo no final dessa página)
int main(void) {
  int linhas = 4;
  int colunas = 4;

  float matriz[linhas][colunas];
  float aux[1][colunas];
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("Digite um numero [%d] [%d]:", i, j);
      scanf("%f", &matriz[i][j]);
    }
    printf("\n");
  }
   for (int i = 0; i < linhas; i++) {
     for (int j = 0; j < colunas; j++) {
        printf("[%.f]",matriz[i][j]);
     }
     printf("\n");

  }
  printf("Diagonal\n"); 
  for(int i = 1; i <= linhas; i++){
    printf("[%.f]\n", aux[i][i]);
  }
  printf("Diagonal Secundaria\n"); 
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < linhas; j++){
      if(i % j== 0){
         printf("[%f]", aux[i][j]);
      }
    }
  }
printf("\n");
  

  return 0;
}

#include <stdio.h>
/*
3) Leia uma matriz 5 x 10 que se 
refere respostas de 10 questões de 
múltipla escolha, referentes a 5 alunos. 
Leia também um vetor de 10 posições 
contendo o gabarito de respostas que 
podem ser a, b, c ou d. Seu programa 
devera comparar as respostas de cada 
candidato com o gabarito e emitir um 
vetor denominado resultado, contendo a 
pontuação (considere 1 ponto por acerto) 
correspondente a cada aluno. Desenhe as 
matrizes no papel, antes de tentar 
programar algo. Fotografar esses 
desenhos e postar junto com o programa 
desenvolvido.
*/
int main(void) {
  int linhas = 1;
  int colunas= 10;

  char matriz[linhas][colunas];
  int vetor [colunas];
  int vetorP [colunas];

  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("Digite sua respostas A,B,C ou D:");
      scanf("%s", &matriz[i][j]);
    }
    printf("Estudante %dᵃ\n", i+1);
  }

  vetor[0] = 'c';
  vetor[1] = 'b';
  vetor[2] = 'c';
  vetor[3] = 'a';
  vetor[4] = 'd';
  vetor[5] = 'c';
  vetor[6] = 'a';
  vetor[7] = 'b';
  vetor[8] = 'd';
  vetor[9] = 'b';


  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if(matriz[i][j] == vetor[j]){
        vetorP[j] = 1;
        printf(" ✔[%d] ", vetorP[j]);
      }else if (matriz[i][j] != vetor[j]){
        vetorP[j] = 0;
        printf(" X[%d] ", vetorP[j]);
      }
    }
  }
  printf("\nGabarito\n");
  for(int i = 0; i < colunas; i++){
    printf("[%c]", vetor[i]);
  }
  
  printf("\n");
  return 0;
}

#include <stdio.h>
/* 
4 Faça um programa que leia os nomes 
dos alunos de uma turma e armazene na 
memória RAM. A turma terá no mínimo 1 
e no máximo 50 alunos. Após ler os nomes 
de um número indefinido de alunos, 
mostre o nome e leia 4 notas 
(números reais) obtidas pelo aluno e 
armazene essas notas na memória RAM. 
Leia a quantidade total de aulas 
(número inteiro). Leia um vetor com a 
quantidade de faltas (número inteiro) de 
cada aluno, sempre mostrando o nome do 
aluno. Calcule a média de cada aluno, 
usando a média ponderada ( MP = 
nota1*1+nota2*2+nota3*3+nota4*4)/10). 
Caso o aluno não tenha um número de faltas 
superior a 25% do total de aulas e MP maior
ou igual a 6.0 esse aluno está aprovado.
O aluno pode ainda estar reprovado por 
faltas ou reprovado por nota. 
Mostre o resultado em um relatório 
com: nome, nota1,nota2,nota3,nota4, MP, 
faltas, porcentagem de faltas e situação.
*/

int main(void) {

  int colunas = 4;
  int quantAlu;
  char nomes[50];
  float notasAlu[quantAlu][colunas];
  float mP[quantAlu];
  int faltas[quantAlu];
  int totalAul = 0;
  float aulasPor = 0;
  float faltasPor;

  printf("Digite a quatdade de alunos: ");
  scanf("%d", &quantAlu);

 
  for(int i = 0; i < quantAlu; i++){
    printf("Digite o nome do aluno: ");
    scanf("%s", &nomes[i]);
    printf("Digite a quantidade de faltas: ");
    scanf("%d", &faltas[i]);
    printf("Digite o total de aulas: ");
    scanf("%d", &totalAul);
    for(int j = 0; j < colunas; j++){
      printf("Digite a nota: ");
      scanf("%f", &notasAlu[i][j]);
    }
  }
  for(int i = 0; i < quantAlu; i++){
    mP[i] = ((notasAlu[i][0] * 1  + notasAlu[i][1] * 2 + notasAlu[i][2] * 3 + notasAlu[i][3] * 4) / 10) ;
    printf("%c\n", nomes[i]);
  }
  
  for(int i = 0; i < quantAlu; i++){
    printf("--Notas--\n");
    for(int j = 0; j < colunas; j++){
      printf("%.2f\n", notasAlu[i][j]);
    }
  }

  aulasPor = totalAul * 0.25;

  for(int i = 0; i < quantAlu; i++){
    faltasPor = (faltas[i] / totalAul) * 100;
    printf("Media Final: %.2f\n", mP[i]);
    printf("Faltas: %d\n", faltas[i]);
    printf("Porcentagem de faltas: %.2f\n", faltasPor); 

      if(faltas[i] < aulasPor && mP[i] >= 6.0){
        printf("APROVADO!!!\n");
      }else if(faltas[i] > aulasPor || mP[i] < 6.0){
        printf("REPROVADO!!!\n");
      }
  }


  return 0;
}

#include <stdio.h>
/*  
5 - Um cinema tem 150 lugares. 
São 10 fileiras com 15 lugares cada. 
Faça um programa que controle a venda de ingressos. 
Leia o valor do ingresso. 
Para controlar a venda, devem ser usados os seguintes códigos, 
0 (zero) para lugares vazios, 1 para lugares ocupados e 2 para 
lugares ocupados com pagamento de 1/2 ingresso. Ao final, 
deve-se totalizar o valor total arrecadado na seção.*/

int main(void) {

  int linhas = 10;  
  int colunas = 15;

  int cinema[linhas][colunas];
  int vetorCom[linhas * colunas];
  int ingressoN = 0;
  int ingressoDes = 0;

  printf("CINEMA DA FAMILIA!!\n");
  printf("1- Para comprar o ingresso R$20,00\n");
  printf("2- Para comprar o ingresso com carteirinha R$10,00\n");
  printf("0- Para começar o filme\n");

  for(int i = 0; i < linhas * colunas; i++){
      printf("Digite qual forma de comprar seu ingresso:");
      scanf("%d", &vetorCom[i]);
  }
  
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      if(vetorCom[i] == 1){
        ingressoN += 20;
        cinema[i][j] = 1;
        printf("[%d]", cinema[i][j]);
      }else if(vetorCom[i] == 2){
        ingressoDes += 10;
        cinema[i][j] = 2;
        printf("[%d]", cinema[i][j]);
      }else if(vetorCom[i] == 0){
        cinema[i][j] = 0;
        printf("[%d]", cinema[i][j]);
      }
    }
    printf("\n");
  }

  printf("O valor arrecadado na seção foi R$ %.2d\n ", ingressoN + ingressoDes);






  return 0;
}