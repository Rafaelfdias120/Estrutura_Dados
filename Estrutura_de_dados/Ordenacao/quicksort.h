#ifndef QUICKSORT_H
#define QUICKSORT_H

void ExibirVetor(int *v, int N);
void TrocarElemento(int *A, int *B);

int Particao(int *V, int inf, int Sup);
void QuickSort(int *V, int inf, int Sup);

#endif