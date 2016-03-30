#pragma once

#include<iostream>

using namespace std;

class Fila
{
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
	//N.
};

