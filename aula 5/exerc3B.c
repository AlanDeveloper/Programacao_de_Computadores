#include <stdio.h>

// 3 B
// void main () { // troca valores entre a e b
//  int a= 10, b=20, *tempA, *tempB, aux;
//  tempA = &a;
//  tempB = &b;
//  aux = a;
//  *tempA = tempB; <----------------------- NÃO ESTÁ ALOCANDO VALOR DE TEMPB É NECESSÁRIO O "*"
//  *tempB = aux;
//  printf("a =%d b=%d", a, b);
// }

void main () {
 int a = 10, b =20, *tempA, *tempB, aux;
 tempA = &a;
 tempB = &b;

 aux = a;
 *tempA = *tempB;
 *tempB = aux;
 printf("a = %d b = %d", a, b);
}
