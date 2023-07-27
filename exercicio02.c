/*Fa ̧ca um programa que receba 2 n ́umeros inteiros quaisquer representados por x e y e
mostre, em ordem crescente, todos os n ́umeros entre x e y cujo resto da divis ̃ao deles por
5 for igual a 2 ou igual a 3*/

#include <stdio.h>

int main() {
    int x, y;

    printf("Digite o primeiro número inteiro (x): ");
    scanf("%d", &x);

    printf("Digite o segundo número inteiro (y): ");
    scanf("%d", &y);

    int inicio = (x < y) ? x : y;
    int fim = (x > y) ? x : y;

    printf("Números entre %d e %d cujo resto da divisão por 5 é igual a 2 ou igual a 3:\n", inicio, fim);
    for (int num = inicio; num <= fim; num++) {
        int resto_divisao = num % 5;
        if (resto_divisao == 2 || resto_divisao == 3) {
            printf("%d\n", num);
        }
    }


    return 0;
}
