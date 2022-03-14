/**
* Author: João Fernandes
* Email: a20128@alunos.ipca.pt
* Date: 12-03-2022
* Desc: Dados da Ficha 1
*/

#ifndef DADOS
#define DADOS 1

#define A 20

#pragma region Arrays

typedef struct Objeto {
	int tamanho;
	char nome[A];
}Objeto;

#pragma endregion

#pragma region Cálculos

int Soma(Objeto *x, Objeto *y);
int Maior(Objeto *x, Objeto *y);
int Troca(Objeto*x, Objeto *y);

#pragma endregion

#endif // !DADOS
