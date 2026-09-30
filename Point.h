#pragma once
#include <string>
#include <math.h>

class Point
{
private:
	float abscisse;
	float ordonnee;
public:
	Point(float abs, float ord);

	// les deux modificateurs
	float getAbscisse();
	float getOrdonnee();

	// les deux accesseurs 
	void setAbscisse(int abs);
	void setOrdonnee(int ord);

	std::string toString();

	void deplace(float x, float y);

	double distance();

	Point symetrie();

	

};

