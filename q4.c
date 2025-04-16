#include <stdio.h>
#include <stdlib.h>

int somaVetor(int *n, int tamanho){
    if(tamanho == 0){
        return 0;
    } else {
        return n[0] + somaVetor(n+1, tamanho - 1);
    }
}

int main(){
    int vet[] = {0, 1, 2};
    printf("%d  ", somaVetor(vet, 3));

    return 0;
}

