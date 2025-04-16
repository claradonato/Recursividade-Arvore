#include <stdio.h>
#include <stdlib.h>

int buscaItem(int *v, int tam_n, int item_x){
    if(tam_n == 0){
        return -1;
    } else if (v[tam_n - 1] == item_x){ // verificação feita do final para o início do vetor
        return tam_n-1;
    } else { // caso não seja o último da vez, diminui novamente do tamanho para mudar o indice
        return buscaItem(v, tam_n-1, item_x); 
    }
} 

int main(){
    int vet[] = {1, 2, 3, 4, 5};
    printf("Indice: %d\n", buscaItem(vet, 5, 3));

    return 0;
}