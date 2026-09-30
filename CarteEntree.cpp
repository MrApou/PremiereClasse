#include "CarteEntree.h"


CarteEntree::CarteEntree()
{
	unites = 20;
}

int CarteEntree::getUnites()
{
	return unites;
}

void CarteEntree::debiterUnites(int nombre)
{
	if (nombre < unites)
	{
		unites = unites - nombre;
	}
}