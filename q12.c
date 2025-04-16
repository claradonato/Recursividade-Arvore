#include <stdio.h>
#include <stdlib.h>

int divIntRec(int x, int y){
    if(x < y){
        return 0;
    } else {
        return divIntRec(x-y, y) + 1;
    }
}

int main(){
    int x = 10, y = 5;
    printf("%d\n", divIntRec(x, y));

    return 0;
}

/*
divIntRec(10, 5){
10 = 5 ? NAO
entao, divIntRec(10-5, 5) + 1
ou seja, divIntRec(5, 5) + 1

    divIntRec(5, 5){
    5 = 5? SIM
    retorna 1

    }
}

RETORNA 2


divIntRec(5, 2){
5 = 2? NAO
entao, divIntRec(5-2, 2) + 1
ou seja, divIntRec(3, 2) + 1

    divIntRec(3, 2){
    3 = 2 ? NAO
    entao, divIntRec(3-2, 2) + 1
    ou seja, divIntRec(3)
    }
}

conclusão: a primeira condição deve servir para quando a divisao de x/y for 0, que será quando x for menor que y. em casos como 10 / 5 onde 10 é um divisor de 5, pode usar a condição if(x==y) return 1;

*/