/**
 * Exercício de somatória
 * n - limite superior
 * m - limite inferior
 * i - índice
 */

#include <stdio.h>

void main(){
    int n = 80;
    int m = 10;
    int valor = 0;
    int passo = 0;

    for (int i = 10; i <= 80; i++){
        valor += i;
        passo++;

        printf("Passo: %d - Índice: %d - Valor: %d\n", passo, i, valor);
    }
}