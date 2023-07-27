/*Fa ̧ca um programa que calcule e exiba o valor de S, em que S  ́e dado por:
S =
1
1 +
3
2 +
5
3 +
7
4 + . . . +
99
50*/

#include <stdio.h>

int main() {
    double S = 0.0;
    int denominador = 1;

    for (int numerador = 1; numerador <= 99; numerador += 2) {
        S += (double) numerador / denominador;
        denominador++;
    }

    printf("O valor de S é: %.2lf\n", S);

    return 0;
}
