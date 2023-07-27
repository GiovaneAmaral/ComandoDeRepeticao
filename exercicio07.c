/*Fa ̧ca um programa que determine e mostre os 50 primeiros n ́umeros m ́ultiplos de 3 considerando
n ́umeros maiores que 0.*/

#include <stdio.h>

int main() {
    int quantidade_multiplos = 50;
    int numero = 3;
    int contador = 0;

    printf("Os primeiros 50 números múltiplos de 3 são:\n");

    while (contador < quantidade_multiplos) {
        printf("%d\n", numero);
        numero += 3; 
        contador++;
    }

    return 0;
}
