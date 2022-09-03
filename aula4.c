/**
 * Função para calcular o fatorial (exercitando recursividade)
 * 
 * **** Melhorar essa função, não está correta ****
 */

#include <stdio.h>

int fatorial(int numero){
    if (numero == 0){
        return(0);
    }

    numero = numero * fatorial(numero - 1);
    printf("%d\n", numero);
}

void main()
{
    fatorial(5);
}