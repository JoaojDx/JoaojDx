#include <stdio.h>

int main(){
    int INDICE = 12, SOMA = 0, K = 1;

    while(K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }
    printf("\n SOMA = %i", SOMA); //Imprime 77
        return 0;
}//main