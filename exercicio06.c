/*Fa ̧ca um programa receba a idade de v ́arias pessoas, contabilize e mostre o total de pessoas
com menos de 18 anos e o total com mais de 30 anos. O programa deve ser encerrado
quando for digitado o valor 0.*/

#include <stdio.h>

int main() {
    int idade;
    int total_menos_dezoito = 0;
    int total_mais_trinta = 0;

    while (1) {
        printf("Digite a idade da pessoa (ou 0 para encerrar): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break; 
        }

        if (idade < 18) {
            total_menos_dezoito++;
        } else if (idade > 30) {
            total_mais_trinta++;
        }
    }

    printf("Total de pessoas com menos de 18 anos: %d\n", total_menos_dezoito);
    printf("Total de pessoas com mais de 30 anos: %d\n", total_mais_trinta);

    return 0;
}
