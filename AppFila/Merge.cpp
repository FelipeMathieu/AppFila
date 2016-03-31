#include "Merge.h"

Merge::Merge()
{
}
Merge::~Merge()
{
}

int *Merge::mergeFila(int *v1, int tamanhoV1, int *v2, int tamanhoV2)
{
	int i, j, k;

	int *v3 = (int *)malloc((tamanhoV1 + tamanhoV2)*sizeof(int));

	i= 0;
	j = 0;
	k = 0;

	while(i < tamanhoV1 && j < tamanhoV2)
	{
		if (v1[i] <= v2[j])
		{
			v3[k] = v1[i];
			i++;
		}
		else
		{
			v3[k] = v2[j];
			j++;
		}
		k++;
	}

	while (i < tamanhoV1)
	{
		v3[k] = v1[i];
		i++;
		k++;
	}

	while (j < tamanhoV2)
	{
		v3[k] = v2[j];
		j++;
		k++;
	}

	return v3;
}
int *Merge::merge(int *v, int low, int mid, int high)
{
	int *aux = (int *)malloc((high)*sizeof(int));

	int i, j, k;

	k = low;
	i = low;
	j = mid + 1;

	while (i <= mid && j <= high)
	{
		if (v[i] <= v[j])
		{
			aux[k] = v[i];
			k++;
			i++;
		}
		else
		{
			aux[k] = v[j];
			k++;
			j++;
		}
	}
	
	if (i > mid)
	{
		while (j <= high)
		{
			aux[k] = v[j];
			k++;
			j++;
		}
	}
	else
	{
		while (i <= mid)
		{
			aux[k] = v[i];
			k++;
			i++;
		}
	}
	for (i = low; i < k; i++)
	{
		v[i] = aux[i];
	}

	//free(aux);

	return v;
}
//
