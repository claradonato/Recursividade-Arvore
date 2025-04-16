#include <stdio.h>
#include <stdlib.h>

float numHarmonico(float n){
    // 1 + 1/2 + 1/3 + ... + 1/n
    if(n < 1){
        return 0;
    } else {
        return (1/n) + numHarmonico(n-1);
    }
}

int main(){
    float n = 2;
    printf("%.1f\n", numHarmonico(n));

    return 0;
}
