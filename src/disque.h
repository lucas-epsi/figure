/**
* \file disque.h
* \author lucas
* \brief fichier de la classe disque
*
*/

#pragma once
#include "figure.h"

/**
* \class disque
* \brief classe de definition d'une figure disque
* \details utilisation du rayon en entrée pour renvoyer le perimetre
* et la surface
*/

class disque: public figure{

public:

	float rayon;
	void setRayon(int A);
	float getPerimetre() override;
	float getSurface() override;

};
