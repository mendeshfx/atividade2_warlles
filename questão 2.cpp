#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}