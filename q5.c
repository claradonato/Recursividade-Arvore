#include <stdio.h>
#include <stdlib.h>

int maiorNum(int *n, int tam){
    if(tam == 1){
        return n[0];
    }

    int maiorRestante = maiorNum(n+1, tam - 1);
    return (n[0] > maiorRestante) ? n[0] : maiorRestante; // questao 6: para retornar o menor é só trocar para <
}

int main(){
    int vet[] = {3, 5, 6, 2};
    printf("Maior numero: %d\n", maiorNum(vet, 4));

    return 0;
}
