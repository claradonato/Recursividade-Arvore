#include <stdio.h>
#include <stdlib.h>

int somaDigitos(int n){
    if(n/10 < 1){
        return n;
    } else {
        return n % 10 + somaDigitos(n/10);
    }
}



int main(){
    int numero = 123;
    printf("Soma dos digitos: %d\n", somaDigitos(numero));

    return 0;
}

/*
Exemplo de saída:

somaDigitos(123){
    123 / 10 é menor do que 1?  NAO
    entao, 123 % 10 + somaDigitos(123/10)
    ou seja, 3 + somaDigitos(12)

    somaDigitos(12){
    12 / 10 é menor do que 1? NAO
    entao, 12 % 10 + somaDigitos(12/10)
    ou seja, 2 + somaDigitos(1)

        somaDigitos(1){
        1 / 10 é menor do que 1? SIM
        retorna 1
        }
    }
}
*/
