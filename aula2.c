// Potenciação
// Recursividade usando a "cauda", ou seja, passando o valor que está sendo
// calculado para outras instâncias da função recursiva
// A última chamada da função já irá possuir o valor final

#include <stdio.h>

void potenciacao(int base, int valor, int potencia){
    if (potencia > 1){
        valor = valor * base;
        potencia--;

        if (potencia == 1){
            printf("\nValor: %d", valor);
            return;
        }
        
        potenciacao(base, valor, potencia);
    }
}

void main(){
    printf("Calcular a potenciação.\n");
    printf("Exemplo: 2^4:");
    potenciacao(2,2,4);
    printf("\n");
}