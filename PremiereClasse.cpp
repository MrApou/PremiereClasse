// PremiereClasse.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Crayon.h"
#include "CarteEntree.h"
#include "Point.h"

int main()
{
	/*
	Crayon crayon1(15, 0.5);
	Crayon crayon2(5, 0.5);

	std::cout << "Volume du crayon 1 : ";
	crayon1.donneVolume();

	std::cout << "Volume du crayon 2 : ";
	crayon2.donneVolume();

	return 0;
	*/

	/*
	Crayon crayon1(15, 2);
	Crayon crayon2(20, 4);

	std::cout << "Avant de tailler les crayons :" << std::endl;

	crayon1.affiche();
	crayon2.affiche();

	crayon1.taille(20);
	crayon2.taille(10);

	std::cout << "Apres avoir taille les crayons :" << std::endl;

	crayon1.affiche();
	crayon2.affiche();
	*/


	/*
	CarteEntree carte;
	int reponse;
	int nombre;

	std::cout << "Nombre d'unites disponibles :" << carte.getUnites() << std::endl;

	std::cout << "Utiliser la carte ? (1(oui)/0(non)) :";
	std::cin >> reponse;

	if (reponse == 1)
	{
		std::cout << "Combien d'unites voulez vous utiliser";
		std::cin >> nombre;
		if (nombre <= carte.getUnites())
		{
			carte.debiterUnites(nombre);
		}
		else
		{
			std::cout << "Erreur pas assez d'unites." << std::endl;
		}
		
	}

	std::cout << "Nombre d'unites :" << carte.getUnites() << std::endl;
	*/

	//TestPoint

	
	/*
	Point point1;
	Point point2;
	Point point3;

	double x;
	double y;

	// Point 1
	std::cout << "Entrez l'abscisse du point 1 : ";
	std::cin >> x;
	point1.setAbscisse(x);

	std::cout << "Entrez l'ordonnee du point 1 : ";
	std::cin >> y;
	point1.setOrdonnee(y);

	// Point 2
	std::cout << "Entrez l'abscisse du point 2 : ";
	std::cin >> x;
	point2.setAbscisse(x);

	std::cout << "Entrez l'ordonnee du point 2 : ";
	std::cin >> y;
	point2.setOrdonnee(y);

	// Point 3
	std::cout << "Entrez l'abscisse du point 3 : ";
	std::cin >> x;
	point3.setAbscisse(x);

	std::cout << "Entrez l'ordonnee du point 3 : ";
	std::cin >> y;
	point3.setOrdonnee(y);

	std::cout << "\nCoordonnees des points :" << std::endl;

	std::cout << "Point 1 : " << point1.toString() << std::endl;
	std::cout << "Point 2 : " << point2.toString() << std::endl;
	std::cout << "Point 3 : " << point3.toString() << std::endl;

	point1.deplace(3, 4);
	point2.deplace(2, 1);
	point3.deplace(-1, 2);

	std::cout << "Point 1 : " << point1.toString() << std::endl;
	std::cout << "Point 2 : " << point2.toString() << std::endl;
	std::cout << "Point 3 : " << point3.toString() << std::endl;

	point1.symetrie(6, 10);
	*/



	Point point1(3, 4);

	std::cout << "Point 1 : " << point1.toString() << std::endl;

	std::cout << "Distance : " << point1.distance() << std::endl;

	point1.deplace(2, 1);

	std::cout << "Apres deplacement : " << point1.toString() << std::endl;
	std::cout << "Nouvelle distance : " << point1.distance() << std::endl;

	Point point2 = point1.symetrie();

	std::cout << "Symetrique : " << point2.toString() << std::endl;
	std::cout << "Distance du symetrique : " << point2.distance() << std::endl;
}




// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
