/*Fa ̧ca um programa que receba como entrada um n ́umero inteiro n e exiba o resultado da
seguinte soma:
S = 1 + 1
2 +
1
3 +
1
4 + . . . +
1*/

#include <stdio.h>

int main() {
    int n;

    printf("Digite um número inteiro (n): ");
    scanf("%d", &n);

    double soma = 0.0;
    for (int i = 1; i <= n; i++) {
        soma += 1.0 / i;
    }

    printf("O resultado da soma é: %.2lf\n", soma);

    return 0;
}
