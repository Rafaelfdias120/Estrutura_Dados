#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "equipe.h"

int main() {

    Equipe * E = LeDados("bd.csv"); /* E : vetor de todas as equipes lidas do bd.csv */
    for (int i = 0; i < N; i++)
        printf("%d\t%.2f%%\t%s\n", E[i].Pos, E[i].Aproveitamento, E[i].Time);

    return 0;
}