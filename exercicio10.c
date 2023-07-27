/*Fa ̧ca um programa leia uma sequˆencia de n ́umeros inteiros e mostre quantos n ́umeros
m ́ultiplos de 7 foram digitados no intervalo entre 10 e 50, bem como a m ́edia desses n ́umeros.
O programa deve ser encerrado quando for digitado o valor 0.*/

#include <stdio.h>

int main() {
    int numero;
    int quantidade_multiplos = 0;
    int soma_multiplos = 0;

    while (1) {
        printf("Digite um número inteiro (ou 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break; 
        }

        if (numero >= 10 && numero <= 50 && numero % 7 == 0) {
            quantidade_multiplos++;
            soma_multiplos += numero;
        }
    }

    if (quantidade_multiplos > 0) {
        double media = (double) soma_multiplos / quantidade_multiplos;
        printf("Quantidade de números múltiplos de 7 no intervalo [10, 50]: %d\n", quantidade_multiplos);
        printf("Média dos números múltiplos de 7 no intervalo [10, 50]: %.2lf\n", media);
    } else {
        printf("Nenhum número múltiplo de 7 foi digitado no intervalo [10, 50].\n");
    }

    return 0;
}
