#ifndef FILA_H
#define FILA_H

// Definindo a stuct Item da fila

typedef struct Item {
    int chave;
    struct Item* proximo;
} Item;

//definindo a struct Fila

typedef struct Fila {
    int tamanho;
    Item* Inicio;
    Item* Fim;
} Fila;

Item *criarItem(int chave);
Fila *criarFila();
Item *inserirItem(Fila *f, Item *I);

#endif