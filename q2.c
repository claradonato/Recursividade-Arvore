#include <stdio.h>
#include <stdlib.h>

int fat(int n){
    if(n == 1){
        return 1;
    } else {
        return n * fat(n-1);
    }
}

int main(){
    int fato = 5;
    printf("%d\n", fat(fato));

    return 0;
}