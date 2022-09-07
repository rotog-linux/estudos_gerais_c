// Potenciação
// Reestruturação para fazer a recursividade sem a cauda

#include <stdio.h>

int potenciacao(int base, int potencia){
    if (potencia == 0){
        return 1;
    }

    return base * potenciacao(base, potencia - 1);
}

void main(){
    printf("Calcular a potenciação.\n");
    printf("Exemplo: 3^4: %d\n", potenciacao(3, 4));
}