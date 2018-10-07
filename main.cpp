

/* \file main.cpp
* \brief fichier main création de figure
* \author lucas
* \version 1.0
*/
#include "disque.h"
#include "triangle.h"
#include "rectangle.h"
#include <string>
using namespace std;

 int main(){


/* \brief boucle de création d'objet
*
* dans cette boucle on crée un nouvel objet après confirmation de l'utilisateur
*/
	char start;

	do {
	cout <<endl;
	cout << " création du nouvel objet :" << endl;
	string name_object;
	cin >> name_object;
/* brief choix du type d'objet puis sélection dans une boucle switch
*/

	cout << " choisir le type de figure : rentrer le numéro de la figure choisie" << endl;
	cout << " 1) Rectangle" <<endl;
	cout << " 2) Triangle" << endl;
	cout << " 3) Disque" << endl;
	cout << " 4) Exit Menu " <<endl;
	int select;
	cin >> select;
	switch(select){
/*
* \brief cas 1 = creation d'un rectangle
* \details instanciation rectangle puis utilisation des methodes 
* pour renvoyer le perimetre et la surface
*/
	case 1:{

	float X, Y;
	rectangle object;
	cout << " longueur rectangle " << name_object <<"  :" << endl;
	cin >> X;
	cout << " largeur rectangle " << name_object <<"  :" << endl;
	cin >> Y;

	object.Setlongueur(X);
	object.Setlargeur(Y);

	cout << " perimetre de " << name_object <<" = "<< object.getPerimetre() << endl;
	cout << " surface de "<< name_object <<" = "<< object.getSurface() << endl;
	}
	break;

/*
* \brief cas 2 : création d'un triangle
* \details création du triangle avec 3 côtés puis utilisationd des methodes 
* afin de renvoyer le perimetre et la surface.
*/
	case 2: {

	float A, B, C;
	triangle object;
	cout << " Entrez 1er côté triangle " << name_object <<"  :"<<endl;
	cin >> A;
	cout << " Entrez 2eme côté triangle " << name_object <<"  :"<<endl;
	cin >> B;
	cout << " Entrez 3eme côté triangle " << name_object <<"  :"<<endl;
	cin >> C;
	object.Setcotes(A,B,C);
	cout <<" perimetre de "<< name_object<<" = "<< object.getPerimetre() <<endl;
	cout <<" surface de "<< name_object<<" = "<< object.getSurface() <<endl;
	}
	break;

	case 3: {

	float A;
	disque object;
	cout << " Entrez rayon du disque " << name_object <<"  :"<<endl;
	cin >> A;
	object.setRayon(A);
	cout <<" perimetre de "<< name_object<<" = "<< object.getPerimetre() << endl;
	cout <<" surface de "<< name_object<<" = "<< object.getSurface() << endl;

	}
	break;

	case 4: { cout << " pas d'objet créé ..." << endl;}
	break;
}
	cout <<endl;
	cout << "créer nouvel objet?"<<endl;
	cout << "y/n" << endl;
	cin >> start;
} while (start=='y'||start=='Y');

	cout << " fin programme" << endl;
	return 0;
}

