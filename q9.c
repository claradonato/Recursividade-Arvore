#include <stdio.h>
#include <stdlib.h>

//método de divisões sucessivas
int mdc(int x, int y){
    if(y == 0){
        return x;
    }
    return mdc(y, x%y);
}

int main(){
    int n1 = 6, n2 = 4;
    printf("%d\n", mdc(n1, n2));
    return 0;
}