/**
 * Usar a recursividade para calcular o fatorial de um número
 */

#include <stdio.h>

int fatorial(int numero){
    if (numero == 0){
        return 1;
    }

    return numero * fatorial(numero - 1);
}

void main(){
    int numero = 0;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("\nO fatorial de %d é %d\n", numero, fatorial(numero));
}