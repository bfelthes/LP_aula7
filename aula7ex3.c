#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int chute;
    int numero=rand()%5;
    
    while(chute!=numero) {
        printf("Digite um numero: ");
        scanf("%d", &chute);
        
        if(chute!=numero){
            printf("Errou!\n");
        } else {
            printf("Acertou!\n");
        }
    }
    return 0;
}