/**
* Author: João Fernandes
* Email: a20128@alunos.ipca.pt
* Date: 12-03-2022
* Desc: Cálculos da Ficha 1
*/

#include "Globais.h"

#pragma region Cálculos
/**
* Calcula a soma de dois valores inteiros
*/
int Soma(Objeto* x, Objeto* y) {
	return (x->tamanho + y->tamanho);
}

/**
* Retorna o maior de dois valores inteiros
*/
int Maior(Objeto *x, Objeto *y) {
	if (x->tamanho > y->tamanho) 
	{
		return(x->tamanho);
	}
	else
	{
		return(y->tamanho);
	}
}

/**
* Troca os valores de duas variáveis
*/
int Troca(Objeto *x, Objeto *y) {
	int z = x->tamanho;
	x->tamanho = y->tamanho;
	y->tamanho = z;
	return 0;
}
#pragma endregion