#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"

ListaTarefas *CriarLista(int CapacidadeInicial)
{
    ListaTarefas *L = (ListaTarefas *)malloc(sizeof(ListaTarefas));
    if (L == NULL)
        return NULL;
    L->Capacidade = CapacidadeInicial;
    L->Tamanho = 0;
    L->Dados = (Tarefa *)malloc(CapacidadeInicial * sizeof(Tarefa));
    if (L->Dados == NULL)
    {
        free(L);
        return NULL;
    }
    return L;
}

void DestruirLista(ListaTarefas *Lista)
{
    if (Lista == NULL)
        return;
    free(Lista->Dados);
    free(Lista);
}

int AdicionarTarefa(ListaTarefas *Lista, Tarefa *T)
{
    if (Lista == NULL || T == NULL)
        return 0;
    if (!AumentarCapacidade(Lista, Lista->Tamanho + 1))
        return 0;
    Lista->Dados[Lista->Tamanho] = *T;
    Lista->Tamanho++;
    return 1;
}

int RemoverTarefa(ListaTarefas *Lista, int Indice)
{
    if (Lista == NULL)
        return 0;
    if (Indice < 0)
        return 0;
    if (Indice >= Lista->Tamanho)
        return 0;
    /* Desloca manualmente todos os elementos após o índice para a esquerda */
    for (int i = Indice; i < Lista->Tamanho - 1; i++)
        Lista->Dados[i] = Lista->Dados[i + 1];
    Lista->Tamanho--;
    return 1; /* Sucesso */
}

int AtualizarStatus(ListaTarefas *Lista, int Indice, int NovoStatus)
{
    Tarefa *T = ObterTarefa(Lista, Indice);
    if (T == NULL)
        return 0;
    T->Status = NovoStatus;
    return 1;
}

int exibirTarefas(const ListaTarefas *Lista, char *CaminhoArquivo)
{
    if (Lista == NULL || CaminhoArquivo == NULL)
        return 0;
    FILE *Arq = fopen(CaminhoArquivo, "w");
    if (Arq == NULL)
        return 0;
    for (int i = 0; i < Lista->Tamanho; i++)
    {
        Tarefa T = Lista->Dados[i];
        printf("%d\t", i);
        printf("%s\t", T.Titulo);
        printf("%s\t", T.Responsavel);
        printf("%d\t", T.Status);
        printf("%d \t\n ", T.Avaliacao);
    }
    return 1;
}