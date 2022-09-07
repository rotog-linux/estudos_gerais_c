/**
 * Algoritmos de ordenação: insertion sort
 */

#include <stdio.h>

void imprimir(int* lista){
    int tamanho = 10;
    int i = 0;

    for (i = 0; i < tamanho; i++){
        printf("%d\t", lista[i]);
    }

    printf("\n");
}

void main(){
    int lista[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    imprimir(&lista[0]);
    int tmp = 0;
    int pos = 0;
    int idx = 0;
    int postmp = 0;

    for (pos = 1; pos < 10; pos++){
        if (lista[pos] < lista[pos - 1]){
            tmp = lista[pos];
            lista[pos] = lista[pos - 1];
            lista[pos - 1] = tmp;
            imprimir(&lista[0]);

            for (postmp = pos - 1; postmp > 0; postmp--){
                if (lista[postmp] < lista[postmp - 1]){
                    tmp = lista[postmp];
                    lista[postmp] = lista[postmp - 1];
                    lista[postmp - 1] = tmp;
                    imprimir(&lista[0]);
                }
            }
        }
    }

    imprimir(&lista[0]);
}