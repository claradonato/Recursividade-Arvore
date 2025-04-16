#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    if(str[0] == '\0'){
        return 0;
    } else {
        return 1 + length(str + 1);
    }
}

int main(){
    char *palavra = "Brasil";
    printf("%d\n", length(palavra));

    return 0;
}