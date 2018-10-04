/**
* \file rectangle.h
* \author lucas
* \version 1.0
* \brief définition de la classe rectangle
*/
#include "figure.h"
#pragma once

/*
* \brief définition classe rectangle
* la classe possède 2 attributs longeur et largeur qu'on définit dans les méthodes
* Setlongueur et Setlargeur puis qu'on utilise dans les methodes override 
* getPerimetre et getSurface (pour obtenir le perimetre et la surface du rectangle)
*/
class rectangle: public figure {

	public:

	float longueur;
	float largeur;
	float getPerimetre() override;
	float getSurface() override;
	void Setlongueur(float l);
	void Setlargeur(float L);	

};

