#include <stdio.h>
#include <stdlib.h>

int potencia(int num){
    if(num == 0){
        return 1;
    } else {
        return 2 * potencia(num-1);
    }
}

void main(){
    int num = 4;
    printf("%d\n", potencia(num));
}
