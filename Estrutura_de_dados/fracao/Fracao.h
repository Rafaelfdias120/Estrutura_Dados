#ifndef FRACAO_H
#define FRACAO_H

typedef struct {
int numerador;
int denominador;
} Fracao;

Fracao criarFracao(int numerador, int denominador);
Fracao somarFracao(Fracao a, Fracao b);
Fracao subtrairFracao(Fracao a, Fracao b);
Fracao multiplicarFracao(Fracao a, Fracao b);
Fracao dividirFracao(Fracao a, Fracao b);
Fracao simplificarFracao(Fracao f);

int mdc(int a, int b);
#endif