#include <stdio.h>
#include <stdlib.h>

int soma(int n){
    if(n==1){
        return 1;
    }
    else{
        return n = n + soma(n-1);
    }
}

int main(){
    int num = 4;
    printf("%d\n", soma(num));

    return 0;
}