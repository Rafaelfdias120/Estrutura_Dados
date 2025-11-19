#include <stdio.h>
#include <stdlib.h>

//implementação de uma arvore generica, considerando 3 filhos por nó

typedef struct No{
   char chave;
   struct No *F[3];//Vertor de ponteiros para os filhos
} No;

No *criarNo(char chave){
   No *N = (No *)malloc(sizeof(No));
   if(N == NULL){
      printf("Erro ao alocar memória para o nó.\n");
      return NULL;
   }
   N->chave = chave;
  for (int i = 0; i < 3; i++)N->F[i] = NULL;
  
   return N;
}

int main(){
    No *A = criarNo('a');
    No *B = criarNo('b');
    No *C = criarNo('c');
    No *D = criarNo('d');

    A->F[0] = B;// B é filho 1 de A
    A->F[1] = C;// C é filho 2 de A
    A->F[2] = D;// D é filho 3 de A

    system("cls");

    printf("%c\n", A->chave);        // Imprime: a
    printf("%c\n", A->F[0]->chave);  // Imprime: b
    printf("%c\n", A->F[1]->chave);  // Imprime: c
    printf("%c\n", A->F[2]->chave);  // Imprime: d
    
    return 0;
}