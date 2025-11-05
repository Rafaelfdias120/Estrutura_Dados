#include <stdio.h>
#include <stdlib.h>

#include "fila.h"

Item *criarItem(int chave){
    Item *x = (Item *)malloc(sizeof(Item));
    if (x == NULL){
        printf("Erro ao alocar memoria para o novo item.\n");
        return NULL;
    }

    x->chave = chave;
    x->proximo = NULL;
    return x;
}

Fila *criarFila(){
    
    Fila *f = (Fila *)malloc(sizeof(Fila));

    if (f == NULL){
        printf("Erro ao alocar memoria para a fila.\n");
        return NULL;
    }

    f->tamanho = 0;
    f->Inicio = NULL;
    f->Fim = NULL;
    return f;
}

void enfileirar(Fila *f, Item *I){
    if (f -> tamanho == 0)f->Inicio = I;
    else f->Fim->proximo = I;

    f->Fim = I;
    f->tamanho++;
}

