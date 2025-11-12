// Inclusão de bibliotecas padrão
#include <stdio.h>  // Biblioteca para entrada e saída de dados
#include <stdlib.h> // Biblioteca para funções de alocação de memória
#include "pilhas.h" // Arquivo de cabeçalho com as definições de estruturas

/*
 * Função: criarItem
 * Descrição: Cria um novo item/nó para ser inserido na pilha
 * Parâmetros: int chave - valor inteiro a ser armazenado no item
 * Retorno: Ponteiro para o novo Item criado, ou NULL se falhar na alocação
 */
Item *criarItem(int chave)
{
    // Aloca memória dinamicamente para um novo Item
    Item *I = (Item *)malloc(sizeof(Item));

    // Verifica se a alocação foi bem-sucedida
    if (I == NULL)
    {
        printf("Erro ao alocar memória para o item.\n");
        return NULL;
    }

    // Inicializa os campos do item
    I->chave = chave;   // Atribui o valor passado como parâmetro
    I->anterior = NULL; // Define que ainda não há item anterior na pilha
    return I;           // Retorna o item criado e inicializado
}

/*
 * Função: criar_pilha
 * Descrição: Cria e inicializa uma nova pilha vazia
 * Parâmetros: Nenhum
 * Retorno: Ponteiro para a nova Pilha criada, ou NULL se falhar na alocação
 */
Pilha *criarPilha()
{
    // Aloca memória dinamicamente para uma nova Pilha
    Pilha *P = (Pilha *)malloc(sizeof(Pilha));

    // Verifica se a alocação foi bem-sucedida
    if (P == NULL)
    {
        printf("Erro ao alocar memória para a pilha.\n");
        return NULL;
    }

    // Inicializa os campos da pilha vazia
    P->tamanho = 0; // Define o tamanho inicial como zero
    P->topo = NULL; // Define que não há itens na pilha (topo aponta para NULL)
    return P;       // Retorna a pilha criada e inicializada
}

/*
 * Função: empilhar
 * Descrição: Insere um novo item no topo da pilha (operação PUSH)
 * Parâmetros:
 *   - Pilha* P: ponteiro para a pilha onde será inserido o item
 *   - Item* I: ponteiro para o item que será empilhado
 * Retorno: Nenhum (void)
 */
void empilhar(Pilha *P, Item *I)
{
    // Verifica se a pilha ou o item é inválido
    if (I == NULL)
    {
        printf("Pilha ou item inválido para empilhar.\n");
        return;
    }

    // Faz o item atual apontar para o item que estava no topo
    // Isso mantém a corrente ligada entre os itens
    I->anterior = P->topo;

    // Atualiza o topo da pilha para o novo item
    P->topo = I;

    // Incrementa o contador de elementos da pilha
    P->tamanho++;
}

/*
 * Função: desempilhar
 * Descrição: Remove e retorna o item do topo da pilha (operação POP)
 * Parâmetros: Pilha* P - ponteiro para a pilha
 * Retorno: Ponteiro para o item removido do topo, ou NULL se a pilha estiver vazia
 */
Item *desempilhar(Pilha *P)
{
    // Verifica se a pilha é inválida ou se está vazia
    if (P->topo == NULL)
    {
        printf("Pilha vazia ou inválida para desempilhar.\n");
        return NULL;
    }

    // Armazena o item do topo em uma variável temporária
    // para poder retorná-lo depois
    Item *I = P->topo;

    // Move o topo para o próximo item (item anterior)
    P->topo = I->anterior;

    free(I);
    // Decrementa o contador de elementos da pilha
    P->tamanho--;

    // Retorna o item que foi removido do topo
    return I;
}