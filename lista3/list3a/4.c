/*
4) Chico tem 1,50 metro e cresce 2 centímetros por ano, 
enquanto Zé tem 1,10 metro e cresce 3 centímetros por ano. 
Construa um algoritmo que calcule e imprima quantos anos 
serão necessários para que Zé seja maior que Chico.
*/

#include <stdio.h>

int main(void)
{
    float cAltura = 1.5;
    float zAltura = 1.1;
    int year = 0;

    while(cAltura >= zAltura) {
        cAltura += 0.02;
        zAltura += 0.03;
        year++;
    }

    printf("Serão necessários %d anos para que Zé seja maior que Chico.", year);
}