#include "Point.h"

Point::Point(float abs, float ord)
{
	abscisse = abs;
	ordonnee = ord;
}


void Point::setAbscisse(int valeur)
{
	abscisse = valeur;
}

void Point::setOrdonnee(int valeur)
{
	ordonnee = valeur;
}

std::string Point::toString()
{
	return  std::to_string(abscisse) + " ; " + std::to_string(ordonnee) ;
}


float Point::getAbscisse()
{
	return abscisse;
}

float Point::getOrdonnee()
{
	return ordonnee;
}

void Point::deplace(float x, float y)
{
	abscisse = abscisse + x;
	ordonnee = ordonnee + y;
}

double Point::distance()
{
	return sqrt(abscisse * abscisse + ordonnee * ordonnee);
}

Point Point::symetrie()
{

	return Point(-abscisse, -ordonnee);
}
