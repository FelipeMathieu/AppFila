#pragma once

#include<iostream>
#include "Fila.h"

using namespace std;

class Merge
{
public:
	Merge();
	~Merge();

	void merge(Fila *f1, Fila *f2, const int esquerda, const int meio, const int direita);
};

