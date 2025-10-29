#ifndef TAREFA_H
#define TAREFA_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Configurações Gerais (que serão usadas para armazenar tamanhos máximos de strings.
#define TAM_TITULO 96
#define TAM_NOME 48
// /Definições de Status /
#define A_FAZER 0
#define EM_ANDAMENTO 1
#define FEITO 2

/* --- Estrutura de uma Tarefa --- */
typedef struct
{
    char Titulo[TAM_TITULO];
    char Responsavel[TAM_NOME];
    int Status;      /* A_FAZER, EM_ANDAMENTO ou FEITO */
    float Progresso; /* 0.0 a 1.0 */
    int Avaliacao;   /* 0 a 5 */
} Tarefa;
/* --- Estrutura da Lista de Tarefas --- */
typedef struct
{
    Tarefa *Dados;
    int Tamanho;
    int Capacidade;
} ListaTarefas;

/* --- Cabeçalhos das Funções --- */
ListaTarefas *CriarLista(int CapacidadeInicial);
void DestruirLista(ListaTarefas *Lista);
int AdicionarTarefa(ListaTarefas *Lista, Tarefa *T);
int RemoverTarefa(ListaTarefas *Lista, int Indice);
Tarefa *ObterTarefa(ListaTarefas *Lista, int Indice);
int AtualizarStatus(ListaTarefas *Lista, int Indice, int NovoStatus);
int AtualizarProgresso(ListaTarefas *Lista, int Indice, float NovoProgresso);
int AtualizarAvaliacao(ListaTarefas *Lista, int Indice, int NovaAvaliacao);
int ContarPorStatus(const ListaTarefas *Lista, int Status);
float MediaAvaliacao(const ListaTarefas *Lista);
char *TextoStatus(int Status);
void ImprimirLista(const ListaTarefas *Lista);
/* --- E poderiam ser criadas várias outras funções (...) --- */

#endif // TAREFA_H