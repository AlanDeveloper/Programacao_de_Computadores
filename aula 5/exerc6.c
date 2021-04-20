#include <stdio.h>

int main() {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Algoritmos";
    char *p3;

    valor = 10;
    p1 = &valor;
    *p1 = 20; // MODIFICOU O VALOR DE A PARA 20
    printf("(a) %d \n", valor); // IMPRIME O VALOR DE A QUE NO CASO FOI MODIFICADO PARA 20

    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0; // MODIFICOU O VALOR DE TEMP PARA 29.0
    printf("(b) %.1f \n", temp); // IMPRIME O VALOR DE TEMP QUE NO CASO FOI MODIFICADO PARA 29.0

    p3 = &nome[0];
    aux = *p3;
    printf("(c) %c \n", aux); // IMPRIME A PRIMEIRA LETRA DA STRING DE P3

    p3 = &nome[4];
    aux = *p3;
    printf("(d) %c \n", aux); // IMPRIME A QUINTA LETRA DA STRING DE P3

    p3 = nome;
    printf("(e) %c \n", *p3); // ATRIBUI A P3 TODA VARIÁVEL DE NOME MAS AO IMPRIMIR SERÁ A PRIMEIRA LETRA PARA VER AS OUTRAS É NECESSÁRIO FAZER *P3 + I

    p3 = p3 + 4;
    printf("(f) %c \n", *p3); // IRÁ IMPRIMIR A QUINTA LETRA DA VARIÁVEL NOME

    p3--;
    printf("(g) %c \n", *p3); // IRÁ IMPRIMIR A QUARTA LETRA DA VARIÁVEL NOME

    return 0;
}