#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"
#include "tarefa.c"

int main(){
    ListaTarefas *minhaLista = CriarLista(10);
    if (minhaLista == NULL) {
        fprintf(stderr, "Erro ao criar a lista de tarefas.\n");
        return 1;
    }

    Tarefa t1 = {"Implementar TAD", "Alice", A_FAZER, 0.0, 0};
    Tarefa t2 = {"Testar TAD", "Bob", A_FAZER, 0.0, 0};

    AdicionarTarefa(minhaLista, &t1);
    AdicionarTarefa(minhaLista, &t2);

    ImprimirLista(minhaLista);

    AtualizarStatus(minhaLista, 0, EM_ANDAMENTO);
    AtualizarProgresso(minhaLista, 0, 0.5);
    AtualizarAvaliacao(minhaLista, 1, 4);

    printf("\nApós atualizações:\n");
    ImprimirLista(minhaLista);

    printf("\nNúmero de tarefas 'A FAZER': %d\n", ContarPorStatus(minhaLista, A_FAZER));
    printf("Média de avaliação: %.2f\n", MediaAvaliacao(minhaLista));

    DestruirLista(minhaLista);
    return 0;
}