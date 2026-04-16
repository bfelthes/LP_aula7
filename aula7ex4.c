#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1, num2, resposta=num1+num2, pontos=0;

    while(resposta==num1+num2) {
        num1=rand()%9, num2=rand()%9;
        printf("%d + %d = ", num1, num2);
        scanf("%d", &resposta);

        if(resposta==num1+num2) {
            pontos++;
            printf("Acertou!\n");
        } else {
            printf("Errou!\nPontos: %d", pontos);
        }
    }
    return 0;
}