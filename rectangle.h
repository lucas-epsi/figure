#include "figure.h"
#pragma once

class rectangle: public figure {

	public:

	float longueur;
	float largeur;
	float getPerimetre() override;
	float getSurface() override;
	void Setlongueur(float l);
	void Setlargeur(float L);	

};

