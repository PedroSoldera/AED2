/******************************************************************************

Pedro Soldera dos Santos - RA: 8135417

01/03/2023

lISTA 2 - EXERC�CIO 4
          A) imprima o maior elemento 
          B) imprima a posi��o do maior elemento

******************************************************************************/
#include <stdio.h>
#define TAM 10
int main()
{
    int v[TAM], maior, posicao;
    // entrada
    for (int i=0; i<TAM; i++) {
        printf("Digite um valor v[%d]: ", i);
        scanf("%d", &v[i]);
    }
    // processamento
    for (int i=0; i<TAM; i++) {     
        
        if (v[i]>maior){
            maior = v[i];
            posicao = i;
        }

    }
    printf("\nO maior elemento � %d e est� na posi��o %d", maior, posicao);

    return 0;
}
