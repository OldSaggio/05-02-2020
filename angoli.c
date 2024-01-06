#include "angoli.h"

void sum(struct angolo a, struct angolo b, struct angolo *ris)
{
	ris->gradi = a.gradi + b.gradi;
	ris->primi = a.primi + b.primi;
	ris->secondi = a.secondi + b.secondi;
}

void normalize(struct angolo* ris)
{
	while (1)
	{
		if ((ris->secondi >= 60))
		{
			ris->secondi -= 60;
			ris->primi++;
		}
		else
			break;
	}

	while (1)
	{
		if ((ris->primi >= 60))
		{
			ris->primi -= 60;
			ris->gradi++;
		}
		else
			break;
	}
}

struct angolo somma_angoli(struct angolo a, struct angolo b)
{
	struct angolo ris = { 0, 0, 0 };

	sum(a, b, &ris);
	normalize(&ris);

	return ris;
}