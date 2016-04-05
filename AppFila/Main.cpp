#include "Fila.h"

void main(void)
{
	Fila *fila = NULL;
	Fila *fila2 = NULL;
	Fila *fila3 = NULL;
	int t, t2;
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
	cin >> t2;

	fila2 = fila2->criaFila(t2);

	for (int i = 0; i < t2; i++)
	{
		cout << "Informe o elemento " << i + 1 << " de sua fila: ";
		cin >> e;
		fila2->insereFila(e);
		e = 0;
	}

	fila->imprimeFila();
	fila2->imprimeFila();
	cout << endl;

//	fila->merge();
//	fila2->merge();
	cout << endl;
	fila3 = fila->mergeFila(fila2);
	fila3->imprimeFila();
	//free(fila);
}
//