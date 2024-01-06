#include "matrix.h"

struct matrix* mat_replicate(const struct matrix* m)
{
	if (m != NULL)
	{
		struct matrix* ris = malloc(sizeof(struct matrix));

		ris->rows = m->rows;
		ris->cols = m->cols * 2;

		double* data = malloc(ris->rows * ris->cols * sizeof(double) * 2);

		size_t i = 0;

		short controllo = 1;

		for (size_t r = 0; r < m->rows; r++)
		{
			for (size_t c = 0; c < m->cols; c++)
			{
				data[i] = m->data[r * m->cols + c];
				i++;
			}
			for (size_t c = 0; c < m->cols; c++)
			{
				data[i] = m->data[r * m->cols + c];
				i++;
			}
		}

		ris->data = data;

		return ris;
	}

	return NULL;
}