#ifndef PESSOA_H
#define PESSOA_H
#define VERDADEIRO 1
#define FALSO 0

typedef int logico;


typedef struct 
{
   int ID;
   char Nome[50];
   int Idade;
} Pessoa;

Pessoa criarPessoa(int id, char * nome, int Idade);
logico cadastrarPessoa(Pessoa P);
void excluirPessoa(Pessoa P);
Pessoa getPessoa(int id);
corrigirIdade(Pessoa P, int idade);
float calcularIdadeMedia(Pessoa  * P);


//Quando usar o void?
//void = vazio (não necessita valor de retorno)


#endif
