#include <stdlib.h>
int prodotto_altri_due(const int* v, size_t n)
{
	if (v == NULL || n == 0)
	 	return -1;
	int controllo = 0;
	int ris = 0;
	for (size_t a = 0; a < n; a++) 
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (i != a && j != a && j != i) 
				{
					if (v[i] * v[j] == v[a])
					{
						ris++;
						controllo = 1;
						break;
					}
				}
			}
			if (controllo == 1)
			{
				controllo = 0;
				break;
			}
		}
	}
	return ris;
}