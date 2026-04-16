#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int resposta, num1, num2;

    while(resposta!=num1+num2) {
        num1=rand()%9, num2=rand()%9;
        printf("%d + %d = ", num1, num2);
        scanf("%d", &resposta);

        if(resposta!=num1+num2) {
            printf("Errou!\n");
        } else {
            printf("Acertou!\n");
        }
    }
    return 0;
}