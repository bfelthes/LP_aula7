#include <stdio.h>

int menor(int x, int y) {
    if(x<=y) {
        return x;
    } else {
        return y;
    }
}
int menor3(int a, int b, int c) {
    int res=menor(a, b);
    res=menor(c, res);

    return res;
}
int main() {
    int num1, num2, num3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);

    printf("O menor: %d", menor3(num1, num2, num3));
    return 0;
}