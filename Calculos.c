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
int Soma(int *x, int *y) {
	return(*x + *y);
}

/**
* Retorna o maior de dois valores inteiros
*/
int Maior(int *x, int *y) {
	if (*x > *y) 
	{
		return(*x);
	}
	else
	{
		return(*y);
	}
}

/**
* Troca os valores de duas variáveis
*/
int Troca(int *x, int *y) {
	int z = *x;
	*x = *y;
	*y = z;
	return 0;
}
#pragma endregion