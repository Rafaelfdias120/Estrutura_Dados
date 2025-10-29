#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "quicksort.h"

#define TAMANHO 2000

int main() {
    int Exemplo[] = {3, 6, 4, 5, 1, 7, 2};
    int Tamanho = sizeof(Exemplo) / sizeof(int);

    clock_t T0 = clock();
    Particao(Exemplo, 0, Tamanho -1);
    clock_t TF = clock();

    double TempoCPU = (double) (TF - T0) / CLOCKS_PER_SEC;

    printf("TempoCPU: %f\n", TempoCPU);

    ExibirVetor(Exemplo, Tamanho);

    int Vetor[TAMANHO];
    for (int i = 0; i < TAMANHO; i++) Vetor[i] = rand() % 100;

    
}
