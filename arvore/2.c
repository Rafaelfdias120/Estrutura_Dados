#include <stdio.h>
#include <stdlib.h>

// implementação de uma arvore binaria, considerando 2 filhos por nó

typedef struct No{
    char chave;
    struct No *Esquerda; // Ponteiro para o filho esquerdo
    struct No *Direita;  // Ponteiro para o filho direito
} No;

No *criarNo(char chave){
    No *N = (No *)malloc(sizeof(No));
    if (N == NULL)
    {
        printf("Erro ao alocar memória para o nó.\n");
        return NULL;
    }
    N->chave = chave;
    N->Esquerda = NULL;
    N->Direita = NULL;

    return N;
}

int main(){
    No *A = criarNo('a');
    No *B = criarNo('b');
    No *C = criarNo('c');
    No *D = criarNo('d');

    A->Esquerda = B; // B é filho esquerdo de A
    A->Direita = C;  // C é filho direito de A
    B->Direita = D;  // D é filho direito de B

    system("cls");

    printf("%c\n", A->Direita->chave); // Imprime: c

    return 0;
}