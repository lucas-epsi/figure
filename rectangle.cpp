#include "rectangle.h"

using namespace std;

	void rectangle::Setlongueur(float l){
	longueur = l;	
	}
	void rectangle::Setlargeur(float L){
	largeur = L;
	}
	float rectangle::getPerimetre(){
//	cout << (longueur + largeur)*2 << endl;
	return (longueur +largeur)*2;
	}
	float rectangle::getSurface(){
	float Y = longueur * largeur;
	return Y;
	}
