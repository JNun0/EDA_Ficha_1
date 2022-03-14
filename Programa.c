/**
* Author: João Fernandes
* Email: a20128@alunos.ipca.pt
* Date: 12-03-2022
* Desc: Resolução da Ficha 1
*/

#include <stdio.h>
#include <locale.h>
#include "Globais.h"

void main()
{
	setlocale(LC_ALL, "Portuguese");

#pragma region Ficha 1 - a
	/*int m = 300;
	float fx = 300.60;
	char cht = 'z';

	printf("\n\n Pointer : Demonstrate the use of & and * operator :\n");
	printf("--------------------------------------------------------\n");
	int* pt1;
	float* pt2;
	char* pt3;
	pt1 = &m;
	pt2 = &fx;
	pt3 = &cht;
	printf(" m = %d\n", m);
	printf(" fx = %f\n", fx);
	printf(" cht = %c\n", cht);
	printf("\n Using & operator :\n");
	printf("-----------------------\n");
	printf(" address of m = %p\n", &m);
	printf(" address of fx = %p\n", &fx);
	printf(" address of cht = %p\n", &cht);
	printf("\n Using & and * operator :\n");
	printf("-----------------------------\n");
	printf(" value at address of m = %d\n", *(&m));
	printf(" value at address of fx = %f\n", *(&fx));
	printf(" value at address of cht = %c\n", *(&cht));
	printf("\n Using only pointer variable :\n");
	printf("----------------------------------\n");
	printf(" address of m = %p\n", pt1);
	printf(" address of fx = %p\n", pt2);
	printf(" address of cht = %p\n", pt3);
	printf("\n Using only pointer operator :\n");
	printf("----------------------------------\n");
	printf(" value at address of m = %d\n", *pt1);
	printf(" value at address of fx= %f\n", *pt2);
	printf(" value at address of cht= %c\n\n", *pt3);*/
#pragma endregion

#pragma region Ficha 1 - b
	Objeto objetos[A];

	objetos[0].tamanho = 10;
	strcpy(objetos[0].nome, "Objeto 1");

	objetos[1].tamanho = 20;
	strcpy(objetos[1].nome, "Objeto 2");

	Objeto *x, *y;
	x = &objetos[0];
	y = &objetos[1];

	int s = Soma(x, y);
	printf("a) %d + %d = %d\n", x->tamanho, y->tamanho, s);
	
	int m = Maior(x, y);
	printf("b) Entre o %d e %d o maior é o %d\n", x->tamanho, y->tamanho, m);
	
	Troca(x, y);
	printf("c) objetos[0] = %d | objetos[1] = %d\n", x->tamanho,y->tamanho);
	Troca(x, y);
	
	printf("d)\n");
	for (int i = 0; i < 2; i++) {
		printf("Nome: %s Tamanho: %d\n", x->nome, x->tamanho);
		*x++;
	}

#pragma endregion
}
