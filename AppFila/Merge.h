#pragma once

#include<iostream>
#include "Fila.h"

using namespace std;

class Merge
{
public:
	Merge();
	~Merge();

	static int *merge(int *v1, int tamanhoV1, int *v2, int tamanhoV2);
};

