//atividade 10 questao 1
#include <stdlib.h>
#include <stdio.h>

int maiorElemento(int vetor[0], int tamanho, int maior){
    tamanho = 10;
    maior = 0;
    for (int i = 0; i < tamanho; i++){
        
        if (vetor[i] > maior){
            maior = vetor[i];
            
        } 
        
    }
    printf("O maior é %d\n",maior); 
}

int main()
{
    int tam = 10;
    int maior;
    int meuVetor[] = {12,4,2,67,81,5,9,1,6,34};
    maiorElemento(meuVetor,tam,maior);
    

    return 0;
}
