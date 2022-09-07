/**
 * Ordenação de elementos: bubble sort
 * Passa várias vezes na sequência ordenando apenas dois elementos enquanto
 * passa.
 */

#include <stdio.h>

void imprimir(int* lista, int passada){
    printf("\n--- Passada: %d\n", passada);
    int tamanho = 10;
    int i = 0;

    for (i = 0; i < tamanho; i++){
        printf("%d\t", lista[i]);
    }

    printf("\n");
}

void main(){
    int pos = 0;
    int tmp = 0;
    int lista[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int troca = 1;
    int passada = 0;

    while (troca == 1){
        passada++;
        imprimir(&lista[0], passada);
        troca = 0;
        
        for (pos = 0; pos < 9; pos++){
            if (lista[pos] > lista[pos + 1]){
                tmp = lista[pos];
                lista[pos] = lista[pos + 1];
                lista[pos + 1] = tmp;
                troca = 1;
            }
        }
    }
}