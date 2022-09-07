/**
 * Treinando listas em C
 */

#include <stdio.h>

void alterar(int* lista, int pos, int num){
    if (pos > 4){
        return;
    }

    lista[pos] = num;
    printf("Memória: %p\n", &lista[0]);
}

void main(){
    int numeros[] = {1, 2, 3, 4, 5};
    printf("%d\n", numeros[1]);
    printf("Memória: %p\n", &numeros);

    alterar(&numeros[0], 1, 4);
    printf("%d\n", numeros[1]);
}