// Inclusão de bibliotecas padrão
#include <stdio.h>  // Biblioteca para entrada e saída (printf)
#include <stdlib.h> // Biblioteca para funções de alocação de memória
#include "pilhas.h" // Arquivo de cabeçalho com definições de estruturas e funções

/*
 * Função: main
 * Descrição: Função principal do programa que demonstra o funcionamento de uma pilha
 * Demonstra as operações: criar pilha, empilhar elementos e desempilhar elementos
 */
int main()
{
    // Cria uma nova pilha vazia
    Pilha *Stack = criarPilha();

    // Verifica se a pilha foi criada com sucesso
    if (Stack == NULL)
    {
        return 1; // Retorna 1 indicando erro ao criar a pilha
    }

    // Empilha 5 elementos na pilha
    // Os elementos são inseridos um por um no topo da pilha
    empilhar(Stack, criarItem(12)); // Primeiro elemento: 12
    empilhar(Stack, criarItem(17)); // Segundo elemento: 17
    empilhar(Stack, criarItem(25)); // Terceiro elemento: 25
    empilhar(Stack, criarItem(40)); // Quarto elemento: 40
    empilhar(Stack, criarItem(90)); // Quinto elemento: 90 (fica no topo)
    
    desempilhar(Stack); // Remove o elemento do topo da pilha (desempilha 90)
    // Após esta operação, o topo aponta para 40
    
    desempilhar(Stack); // Remove o próximo elemento (desempilha 40)
    // Após esta operação, o topo aponta para 25

    // Imprime o valor do elemento que está no topo da pilha
    // Após desempilhar 90, o topo é 40
    printf("%d\n", Stack->topo->chave); // Imprime: 40
}