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
Fila *Fila::mergeFila(Fila *f2)
{
	int i, j, k;

	Fila *v3 = NULL;

	v3 = v3->criaFila((this->tamanho + f2->tamanho));

	i = 0;
	j = 0;
	k = 0;

	while (i < this->tamanho && j < f2->tamanho)
	{
		if (this->dado[i] <= f2->dado[j])
		{
			v3->insereFila(this->dado[i]);
			i++;
		}
		else
		{
			v3->insereFila(f2->dado[j]);
			j++;
		}
		k++;
	}

	while (i < this->tamanho)
	{
		v3->insereFila(this->dado[i]);
		i++;
		k++;
	}

	while (j < f2->tamanho)
	{
		v3->insereFila(f2->dado[j]);
		j++;
		k++;
	}

	return v3;
}