/*Fa ̧ca um programa para calcular e gerar a tabuada dos n ́umeros 1 ao 10.*/

#include <stdio.h>

int main() {
    int numero, multiplicador;

    printf("Tabuada dos números de 1 a 10:\n");

    for (numero = 1; numero <= 10; numero++) {
        printf("Tabuada do %d:\n", numero);
        for (multiplicador = 1; multiplicador <= 10; multiplicador++) {
            printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
        }
        printf("\n");
    }

    return 0;
}
