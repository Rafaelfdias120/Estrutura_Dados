#include <stdio.h>
#include <stdlib.h>

#define ERRO -1

// Prototipos de funções

 // pesquisaSeguencial: Retorna a POSIÇÃO do elemento CHAVE no vetor V, de N elementos.

int PesquisaSequencial(int * V, int N, int chave);

// Implementação da função principal (main)

int main(){

    int Numeros[] = {
        14, 29, 37, 11, 43, 25, 19, 32, 16, 22,
        40, 13, 28, 35, 10, 45, 20, 38, 17, 24,
        39, 41, 15, 27, 18, 26, 39, 12, 12, 21
    };

    int Tamanho = sizeof(Numeros) / sizeof(int); // Tamanho do vetor (120) / tamanho do 
    int Elemento = 16;
    int Posicao = PesquisaSequencial(Numeros, Tamanho, Elemento);

    if(Posicao != ERRO) printf("O elemento %d esta na posicao %d.\n", Elemento, Posicao);
    else printf("O elemento %d nao esta no vetor. \n", Elemento);
    
    return 0;
}

// Implementação das funções cujos protótipos foram definidos (antes)

int PesquisaSequencial(int * V, int N, int chave){
    for (int i = 0; i < N; i++){
        if (V[i] == chave){
            return i;
        }   
    }    
    return ERRO;
}

// Para abrir o terminal: ctrl + aspas