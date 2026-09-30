#include "Crayon.h"
#include <iostream>

void Crayon::affiche()
{
	std::cout << "Le crayon a les proprietes :\n";
	std::cout << "Longueur :\n" << longueur << std::endl;
	std::cout << "Diametre :\n" << diametre << std::endl;
}

Crayon::Crayon(int lg, float diam)
{
	longueur = lg;
	diametre = diam;
}

void Crayon::donneVolume()
{

	float volume = 3.14159 * (diametre / 2) * (diametre / 2) * longueur;
	std::cout << volume << std::endl;

}

void Crayon::taille(double mili)
{
	longueur = longueur - mili / 10;
}
