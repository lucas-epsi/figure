/*
* \file rectangle.cpp
* \author lucas
* \version 1.0
* \ brief création des méthodes de la classe rectangle
*/
#include "rectangle.h"

using namespace std;

/*
* \brief Setlongueur retourne la longueur du rectangle
* \param l	l est l'input de la longueur
* \return ne retourne rien
*/

	void rectangle::Setlongueur(float l){
	longueur = l;	
	}
	void rectangle::Setlargeur(float L){
	largeur = L;
	}

/*
* \brief GetPerimetre renvoir le calcul du perimetre du rectangle
* \details le perimetre du rectangle est calculé en multipliant
*  la somme de la \a longueur et de la \a largeur
* \param  longueur	longueur est la longueur du rectangle
* \param  largeur	largeur est la largeur du rectangle
* \return	Un \e float représentant le perimetre calculé
*/

	float rectangle::getPerimetre(){
	return (longueur +largeur)*2;
	}
	float rectangle::getSurface(){
	float Y = longueur * largeur;
	return Y;
	}
