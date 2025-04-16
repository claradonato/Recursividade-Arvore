#include <stdio.h>
#include <stdlib.h>

int quantDigitos(int n){
    if(n/10 < 1){
        return 1;
    } else {
        return 1 + quantDigitos(n/10);
    }
}

int main(){
    int num = 12337;
    printf("Quantidade de dígitos: %d\n", quantDigitos(num));
    return 0;
}