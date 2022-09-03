/**
 * Exemplo de recursão simples para estudo.
 * Estou pegando um número, chamando uma função para dividir ele por 2.
 * Pego o resultado, e chamo a mesma função para dividir por 2, e assim vai
 * segunido até o número for menor que 1
 */

#include <stdio.h>

void dividir(float valor){
    float dividido = 0;

    if (valor > 1){
        dividido = valor / 2;
        printf("%f", dividido);
        printf("\n");
        dividir(dividido);
    }
}

int main(){
    //printf("Opa, hellow uôrdi!\n");
    printf("Dividindo recursivamente por 2... 18\n");
    dividir(18);
    return(0);
}