#include <stdio.h>
#include <stdlib.h>

int calcPotencia(int x, int k){
    if(k == 0 || x == 0){
        return 1;
    } else if(x > 0){
        return x * calcPotencia(x, k-1);
    }
}

int main(){
    int numero = 2, potencia = 5;
    printf("%d\n", calcPotencia(numero, potencia));

    return 0;
}