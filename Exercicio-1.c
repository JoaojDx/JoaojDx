#include <stdio.h>

int main(){
    int i;
    long long num1, num2, atual, res;
    num1 = 1;
    num2 = 0;

    printf("\nDigite um numero e veja se esta em Fibonacci: ");
        scanf("%lld", &res);

        
    for(i = 0; i < 100; i++){
        atual = num1 + num2;
        if (res == num1 || res == num2){
            printf("\n%lld esta na sequencia de Fibonacci!", res);
                return 0;
        }
        num2 = num1;
        num1 = atual;
        atual = num1 + num2;
    }
        printf("\n%lld nao esta na sequencia de Fibonacci!", res);

        return 0;
}//main
