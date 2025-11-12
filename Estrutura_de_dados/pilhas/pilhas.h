// Guardas de inclusão para evitar múltiplas inclusões do arquivo
#ifndef PILHAS_H
#define PILHA_H

/*
 * Estrutura: Item
 * Descrição: Representa cada nó/elemento da pilha
 * Campos:
 *   - int chave: valor inteiro armazenado no item
 *   - struct Item* anterior: ponteiro para o item anterior na pilha
 *     (funciona como elo de ligação da lista encadeada)
 */
typedef struct Item
{
    int chave;             // Valor armazenado no nó
    struct Item *anterior; // Ponteiro para o próximo nó (estrutura encadeada)
} Item;

/*
 * Estrutura: Pilha
 * Descrição: Representa a pilha (Last In, First Out - LIFO)
 * Campos:
 *   - int tamanho: quantidade de elementos atualmente na pilha
 *   - Item* topo: ponteiro para o elemento no topo da pilha
 *     (por onde os elementos são inseridos e removidos)
 */
typedef struct Pilha
{
    int tamanho; // Contador de elementos na pilha
    Item *topo;  // Ponteiro para o elemento no topo (acesso principal)
} Pilha;

/*
 * Função: criarItem
 * Descrição: Aloca memória e cria um novo item para a pilha
 * Parâmetro: int chave - valor a ser armazenado
 * Retorno: Ponteiro para o novo Item, ou NULL em caso de erro
 */
Item *criarItem(int chave);

/*
 * Função: criarPilha
 * Descrição: Aloca memória e cria uma nova pilha vazia inicializada
 * Parâmetros: Nenhum
 * Retorno: Ponteiro para a nova Pilha, ou NULL em caso de erro
 */
Pilha *criarPilha();

/*
 * ============================================
 * OPERAÇÕES BÁSICAS DE MANIPULAÇÃO DA PILHA
 * ============================================
 */

/*
 * Função: empilhar (PUSH)
 * Descrição: Insere um novo item no topo da pilha
 * Parâmetros:
 *   - Pilha* P: ponteiro para a pilha
 *   - Item* I: ponteiro para o item a ser inserido
 * Retorno: Nenhum (void)
 */
void empilhar(Pilha *P, Item *I);

/*
 * Função: desempilhar (POP)
 * Descrição: Remove e retorna o elemento do topo da pilha
 * Parâmetro: Pilha* P - ponteiro para a pilha
 * Retorno: Ponteiro para o item removido, ou NULL se pilha vazia
 */
Item *desempilhar(Pilha *P);

#endif // Fim do arquivo de cabeçalho