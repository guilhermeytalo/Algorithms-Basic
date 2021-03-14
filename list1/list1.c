/*
1) Faça um algoritmo que leia as 4 notas de um 
aluno e calcule a média aritmética 
simples deste aluno.
*/

#include <stdio.h>


int main(void)
{
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
    

    // entrada de dados
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    // processamento
    media = (n1 + n2 + n3 + n4) / 4;

    // Saída
    printf("A media do aluno é: %.1f \n", media);
    return 0;
}

/*
2) Escreva o algoritmo que é usado para 
fazer uma multiplicação manualmente. 
(exercício para ser feito no papel).
*/


/*
3) Faça um algoritmo que calcule a hipotenusa. 
Usar fórmula de Pitágoras.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    float hipotenusa;
    float cateto1;
    float cateto2;

    // entrada de dados
        printf("Informe o tamanho do primeiro cateto: ");
        scanf("%f", &cateto1);

        printf("Informe o tamanho do segundo cateto: ");
        scanf("%f", &cateto2);

    // processamento
        hipotenusa = sqrt( cateto1*cateto1 + cateto2*cateto2);

    // saída
        printf("O valor da hipotenusa é %4.2f \n",hipotenusa);
    
    return 0;
}

/*
4) Faça um programa de computador para calcular 
a área de um retângulo.
*/
#include <stdio.h>

int main(void)
{
    float b = 0;
    float h = 0;
    float a = 0;

    // entrada de dados
    printf("Digite o valor da base: ");
    scanf("%f", &b);

    printf("Digite o valor da altura: ");
    scanf("%f", &h);

    // processamento
    a = b * h;

    // saída
    printf("O valor da altura é: %.1f M² \n", a);

    return 0;
}


/*
5) Faça um programa que calcule quantas peças de piso 
são necessárias para um determinado ambiente. 

Deve-se informar as dimensões do ambiente em metros 
e o tamanho dos pisos em centímetros. 
Considere que é necessário um acréscimo de 10% na quantidade de 
pisos para que haja sobra para recortes.
*/

#include <stdio.h>

int main(void)
{
    double area;
    double piso;
    float result;
    // entrada de dados
    printf("Informe as dimensões do ambiente: ");
    scanf("%lf", &area);

    printf("Informe o tamanho dos pisos: ");
    scanf("%lf", &piso);

    // processamento
    result = area / ((piso * 0.10) / 100);
    
    // saída
    printf("A quantidade de peças de piso necessárias para o seu ambiente é de: %.2lf \n", result);

    return 0;
}

/*
6) Faça um programa que calcule o preço de um 
produto à vista e a prazo. Informa-se o preço do produto e o 
programa calcula e mostra o preço do produto com desconto de 
10% e o preço do produto com acréscimo de 5%.
*/

#include <stdio.h>

int main(void)
{
    double valorProduto;
    double valorP;
    double valorA;

    // entrada de dados
    printf("insira o valor do produto: ");
    scanf("%lf", &valorProduto);

    // processamento
    valorA = valorProduto * 10 / 100;
    valorA = valorProduto - valorA;

    valorP = valorProduto * 5 / 100;
    valorP = valorProduto + valorP;
    
    // saída
    printf("O valor do produto à vista %.2lf \n", valorA);
    printf("O valor do produto a prazo é %.2lf \n", valorP);
}


/*
7) A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: 
lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros. 
Se um comerciante compra uma determinada quantidade de cada formato, 
faça um algoritmo para calcular quantos litros de refrigerante ele comprou.
*/

#include <stdio.h>

int main(void)
{
    double lata;
    double garrafaP;
    double garrafaG;
    float quantidade;
    
    // entrada de dados
    printf("Digite a quantidade de latas de 350ml: ");
    scanf("%lf", &lata);
    printf("Digite a quantidade de garrafa de 600ml: ");
    scanf("%lf", &garrafaP);
    printf("Digite a quantidade de garrafa de 2L: ");
    scanf("%lf", &garrafaG);

    // processamento
    quantidade = (lata * 0.350) + (garrafaP * 0.600) + (garrafaG * 2);

    // saída
    printf("A quantidade em de refrigerante em litros é %.2lf litros \n", quantidade);

    return 0;
}

/*
8) Construa um algoritmo que 
tendo como dados de entrada 
dois pontos quaisquer no plano, 
P(x1,y1) e P(x2,y2), escreva a 
distância entre eles. 
A fórmula que efetua tal cálculo é:
*/
    #include <stdio.h>
    #include <math.h>

int main(void) 
{
    double x1;
    double x2;
    double y1;
    double y2;
    double d;
    float exp;

    exp = 2;

    // entrada de dados
    printf("digite o valor de x1: ");
    scanf("%lf", &x1);

    printf("digite o valor de x2: ");
    scanf("%lf", &x2);

    printf("digite o valor de y1: ");
    scanf("%lf", &y1);

    printf("digite o valor de y2: ");
    scanf("%lf", &y2);

    // processamento
    d = sqrt( (pow((x2 - x1), exp)) + pow((y2 - y1), exp));

    // saída
    printf("A distancia entre dois pontos quaisquer no plano é %.2lf \n", d);
    
    return 0;
}

/*
9) Pedrinho tem um cofrinho com muitas moedas, 
e deseja saber quantos reais conseguiu poupar. 
Faça um algoritmo para ler a quantidade de cada tipo de moeda, 
e imprimir o valor total economizado, em reais. Considere que existam moedas 
de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. 
Não havendo moeda de um tipo, a quantidade respectiva é zero. 
*/

#include <stdio.h>

int main(void)
{
    double cents1;
    double cents5;
    double cents10;
    double cents25;
    double cents50;
    double real1;
    float moedas;
    
    // entrada
    printf("digite quantas moedas de 1 centavo você tem: ");
    scanf("%lf", &cents1);

    printf("digite quantas moedas de 5 centavos você tem: ");
    scanf("%lf", &cents5);

    printf("digite quantas moedas de 10 centavos você tem: ");
    scanf("%lf", &cents10);

    printf("digite quantas moedas de 25 centavos você tem: ");
    scanf("%lf", &cents25);

    printf("digite quantas moedas de 50 centavos você tem: ");
    scanf("%lf", &cents50);

    printf("digite quantas moedas de 1 real você tem: ");
    scanf("%lf", &real1);
    
    //processamento
    moedas = (cents1 * 0.01) + (cents5 * 0.05) + (cents10 * 0.10) + (cents25 * 0.25) + (cents50 * 0.50) + (real1 * 1);
    
    //saida  
    printf("A quantidade de moedas em real é %.2lf \n", moedas);
}

/*
10)  Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. 
Faça um algoritmo que receba o salário fixo de um funcionário e o valor de suas vendas, 
calcule e mostre a comissão e o salário final do funcionário. 
*/
#include <stdio.h>

int main(void)
{
    double salario;
    double vendas;
    float salarioF;
    float comissions;

    // entrada
    printf("Digite o seu salário: ");
    scanf("%lf", &salario);

    printf("Digite o valor que você vendeu: ");
    scanf("%lf", &vendas);

    //processamento
    comissions =  (vendas * 4) / 100;
    salarioF = comissions + salario;

    //saida
    printf("O valor de comissão é %.2lf \n", comissions);
    printf("O salário final é de %.2lf \n", salarioF);
}