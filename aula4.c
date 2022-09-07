/**
 * Função para calcular o fatorial (sem recursividade)
 */

#include <stdio.h>

int fatorial(int numero){
    if (numero == 0){
        return(0);
    }

    int i;
    int resultado = 1;

    for (i = numero; i > 1; i--){
        resultado = resultado * i;
    }

    return resultado;
}

void main()
{
    int numero = 6;
    printf("O fatorial de %d é: %d\n", numero, fatorial(numero));
}