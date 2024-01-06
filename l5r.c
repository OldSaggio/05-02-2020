#include <stdlib.h>

void swap(int* a, size_t i, size_t j)
{
	int tmp = a[i];
	a[i] = a[j];
	a[j] = tmp;
}

void sort(const int* r, size_t dim)
{
	for (size_t i = 0; i < dim-1; i++)
		for (size_t j = i + 1; j < dim; j++)
			if (r[i] < r[j])
				swap(r, i, j);
}

int roll_and_keep(const int* r, size_t x, size_t y)
{
	if (r != NULL)
	{
		if (x != 0 && y != 0 && y < x)
		{
			sort(r, x);

			int somma = 0;

			for (size_t i = 0; i < y; i++)
				somma += r[i];

			return somma;
		}
	}

	return 0;
}