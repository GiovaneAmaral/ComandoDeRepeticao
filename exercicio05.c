/*Fa ̧ca um programa que receba uma quantidade de n ́umeros inteiros, em seguida calcule e
mostre a sua m ́edia. A quantidade de n ́umeros deve ser fornecida pelo usu ́ario.*/

#include <stdio.h>

int main() {
    int quantidade_numeros;
    int numero;
    int soma = 0;

    printf("Digite a quantidade de números inteiros: ");
    scanf("%d", &quantidade_numeros);

    for (int i = 0; i < quantidade_numeros; i++) {
        printf("Digite o %do número inteiro: ", i + 1);
        scanf("%d", &numero);
        soma += numero;
    }

    double media = (double) soma / quantidade_numeros;
    printf("A média dos números é: %.2lf\n", media);

    return 0;
}
