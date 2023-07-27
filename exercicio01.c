/*Fa ̧ca um programa que receba dois n ́umeros inteiros representando o intervalo (inicio) e
(fim) de uma sequˆencia, e depois imprima todos os n ́umeros  ́ımpares dentro deste intervalo.*/

#include <stdio.h>

void imprimir_impares_no_intervalo(int inicio, int fim) {
    if (inicio % 2 == 0) {
        inicio++;
    }

    printf("Números ímpares no intervalo:\n");
    for (int num = inicio; num <= fim; num += 2) {
        printf("%d\n", num);
    }
}

int main() {
    int inicio, fim;

    printf("Digite o número de início da sequência: ");
    scanf("%d", &inicio);

    printf("Digite o número de fim da sequência: ");
    scanf("%d", &fim);

    if (inicio > fim) {
        printf("Erro: O número de início deve ser menor ou igual ao número de fim.\n");
    } else {
        imprimir_impares_no_intervalo(inicio, fim);
    }

    return 0;
}
