/*Fa ̧ca um programa que leia um n ́umero e verifique se ele  ́e primo ou n ̃ao.*/

#include <stdio.h>

int main() {
    int numero;
    int eh_primo = 1; 

    printf("Digite um número inteiro positivo maior que 1: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        printf("O número deve ser maior que 1 para ser classificado como primo.\n");
    } else {

        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                eh_primo = 0; 
                break;
            }
        }

        if (eh_primo) {
            printf("%d é um número primo.\n", numero);
        } else {
            printf("%d não é um número primo.\n", numero);
        }
    }

    return 0;
}
