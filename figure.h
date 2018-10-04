/**
* \file figure.h
* \author lucas
* \version 1.0
* \brief définition de la classe parent "figure"
*/

#include <iostream>
#pragma once

/*
* \class figure
* \brief définition de la classe figure 
* la classe comporte 2 methode virtuelle getPerimetre et getSurface
*/
class figure {

	public:

	virtual float getPerimetre() = 0;
	virtual float getSurface() = 0;

};
