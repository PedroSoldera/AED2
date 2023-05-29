/******************************************************************************
Pedro Soldera dos Santos - RA: 8135417

08/03/2023

EXERCICIO 2

Faca um programa que leia um vetor de 8 posicoes e, em seguida, leia tambem dois
valores X e Y quaisquer correspondentes a duas posicoes no vetor. Ao final seu
programa dever� escrever a soma dos valores encontrados nas respectivas posicoes
X e Y.

*******************************************************************************/

#include <stdio.h>
#define TAM 8

void main()
{
    int v[TAM], x, y, soma;
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: \n", i);
        scanf("%d", &v[i]);
    }
    
    printf("Digite o valor da primeira posi��o: \n");
    scanf("%d", &x);
    while(x < 0 || x >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &x);
    }
    printf("Digite o valor da segunda posi��o: \n");
    scanf("%d", &y);
    while(y < 0 || y >= TAM) {
        printf("Valor invalido. Digite outro valor: \n");
        scanf ("%d", &y);
    }
    
    soma = v[x] + v[y];
    printf("A soma dos dois valores �: %d", soma);
}



