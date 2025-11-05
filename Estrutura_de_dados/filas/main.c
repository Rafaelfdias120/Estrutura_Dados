#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

int main() {

    Fila* Normal = criarFila();
    
    Item* A = criarItem(15);
    Item* B = criarItem(49);
    Item* C = criarItem(64);
    Item* D = criarItem(20);
    Item* E = criarItem(45);

    Enfilar(Normal, A);
    Enfilar(Normal, B);
    Enfilar(Normal, C);
    Enfilar(Normal, D);
    Enfilar(Normal, E);

    enfilaer(Normal, criarItem(77));

    printf("%d", Normal->tamanho);

    return 0;
}