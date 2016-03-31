#pragma once

#include<iostream>
#include"Merge.h"

using namespace std;

class Fila
{
private:
	int tamanho;
	int *dado;
	int primeiro;
	int ultimo;
	int nItens;

public:
	Fila();
	~Fila();

	Fila *criaFila(int t);
	int verificaFila();
	void insereFila(int e);
	void removeFila();
	void imprimeFila();
	void mergeFila(Fila *f2);
	void merge();
};
//

