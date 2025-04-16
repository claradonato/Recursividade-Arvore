#include <stdio.h>
#include <stdlib.h>

void f(int n){
    if(n == 0){
        printf("0");
    } else {
        if(n>0){
            f(n/2);
            printf("%d", n%2);
        }
    }
}

int main(){
    int n = 10;
    f(n); 

    return 0;
}
