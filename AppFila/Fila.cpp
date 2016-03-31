#include "Fila.h"

Fila::Fila()
{
}
Fila::~Fila()
{
}
Fila *Fila::criaFila(int t)
{
	Fila *f;
	f = (Fila *)malloc(sizeof(Fila));

	f->tamanho = t;
	f->primeiro = 0;
	f->ultimo = -1;
	f->nItens = 0;
	f->dado = (int *)malloc(sizeof(int));
	
	return f;
}
int Fila::verificaFila()
{
	if (this->nItens == 0)
	{
		return 0;
	}
	else if (this->nItens == this->tamanho)
	{
		cout << "Fila cheia!" << endl;
		return 1;
	}
	else
	{
		return 0;
	}
}
void Fila::insereFila(int e)
{
	if (!this->verificaFila())
	{
		this->ultimo++;
		this->dado[this->ultimo] = e;
		this->nItens++;
	}
}
void Fila::removeFila()
{
	int aux = this->dado[this->primeiro++];

	if (this->nItens == 0)
	{
		cout << "Fila Vazia!!" << endl;
	}
	else 
	{
		if (this->primeiro == this->tamanho)
		{
			this->primeiro = 0;
		}

		this->nItens--;
		cout << "Elemento " << aux << " removido com sucesso!" << endl;
	}
}
void Fila::imprimeFila()
{
	int count, i;
	if (this->nItens > 0)
	{
		for (count = 0, i = this->primeiro; count < this->nItens; count++)
		{
			cout << this->dado[i++] << " |";
			if (i == this->tamanho)
			{
				i = 0;
			}
		}
		cout << endl;
	}
	else
	{
		cout << "Fila vazia!" << endl;
	}
}
void Fila::mergeFila(Fila *f2)
{
	Fila *vF = NULL;
	int j = 0;

	vF = vF->criaFila(this->tamanho + f2->tamanho);

	vF->nItens = this->nItens + f2->nItens;
	vF->ultimo = this->ultimo + f2->ultimo;

	vF->dado = Merge::mergeFila(this->dado, this->tamanho, f2->dado, f2->tamanho);

	vF->imprimeFila();
	free(f2);
	//free(vF);
}
void Fila::merge()
{
	this->dado = Merge::merge(this->dado, this->primeiro, (this->tamanho)/2, this->ultimo);

	this->imprimeFila();
}