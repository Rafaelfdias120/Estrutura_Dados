#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "quicksort.h"

void ExibirVetor(int *v, int N){
    for (int i = 0; i < N; i++) printf("%d\t", v[i]);
    printf("\n");

}

void TrocarElemento(int *A, int *B){
    int temp = *A;
    *A = *B;
    *B = temp; 
}

int Particao(int *V, int inf, int Sup){
    int Pivot = V[(inf + Sup / 2)];
    int i = inf;
    int j = Sup;

    while (i <= j){
        while (V[i] < Pivot) i++;
        while (V[j] > Pivot) j++;
       
        if (i <= j){
            TrocarElemento(&V[i], &V[j]);
            i++;
            j++;
        }       
    }
    return i;
}

void QuickSort(int *V, int inf, int Sup){
    if (inf < Sup){
        int P = Particao(V, inf, Sup);
        QuickSort(V, inf, P -1);
        QuickSort(V, P, Sup);
    }
    
}