#include "Fila.h"
#include "Merge.h"

void main(void)
{
	Fila *fila = NULL;
	Fila *fila2 = NULL;
	int t;
	int e;

	cout << "Informe o tamanho da sua primeira fila: ";
	cin >> t;

	fila = fila->criaFila(t);

	for (int i = 0; i < t; i++)
	{
		cout << "Informe o elemento " << i + 1 << " de sua fila: ";
		cin >> e;
		fila->insereFila(e);
		e = 0;
	}
	
	cout << "Informe o tamanho da sua segunda fila: ";
	cin >> t;

	fila2 = fila2->criaFila(t);

	for (int i = 0; i < t; i++)
	{
		cout << "Informe o elemento " << i + 1 << " de sua fila: ";
		cin >> e;
		fila2->insereFila(e);
		e = 0;
	}

	fila->imprimeFila();
	fila2->imprimeFila();
}