#include "rectangle.h"

bool rect_load(FILE* f, struct rect* r)
{
	if (f != NULL)
	{
		int results[4] = { 0, 0, 0, 0 };
		int read;

		for (size_t i = 0; i < 4; i++)
			if (fread(&read, sizeof(int), 1, f) == 1)
				results[i] = read;
			else
				return false;

		r->a.x = results[0];
		r->a.y = results[1];
		r->b.x = results[2];
		r->b.y = results[3];

		return true;

	}

	return false;
}