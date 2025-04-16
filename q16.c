#include <stdio.h>
#include <stdlib.h>

int func(int x, int n, int vetor[]){
    if(n == 0) return -1;
    if(x == vetor[n-1]) return n-1;
    return func(x, n-1, vetor);
}

int main(){
    int x = 2, n = 4;

    return 0;
}
