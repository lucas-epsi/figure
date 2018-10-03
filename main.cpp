
#include "rectangle.h"
#include <string>
using namespace std;

 int main(){


	char restart;

	cout << "	Voulez-vous créer un nouvel objet?"<<endl;
	cout <<  "	y/n" << endl;
	cin >> restart ;

	if (restart == 'y'){
	do {
	cout << "	création du nouvel objet :" << endl;
	string name_object;
	cin >> name_object;

	cout << "	choisir le type de figure : rentrer le numéro de la figure choisie" << endl;
	cout << "	1) rectangle" <<endl;
	cout << "	2) triangle" << endl;
	cout << "	3) disque" << endl;

	int select;
	cin >> select;
	switch(select){
	case 1:{

	float X, Y;
	rectangle object;
	cout << "	longueur rectangle " << name_object <<"  :" << endl;
	cin >> X;
	cout << "	largeur rectangle " << name_object <<"  :" << endl;
	cin >> Y;

	object.Setlongueur(X);
	object.Setlargeur(Y);

	cout << "	perimetre de " << name_object <<" = "<< object.getPerimetre() << endl;
	cout << "	surface de "<< name_object <<" = "<< object.getSurface() << endl;
	}
	break;
	case 2:{ cout << "	nothing yet"<< endl;}

	break;
}
	cout <<"	do you want to create a new figure ? " << endl;
	cin >> restart;

} while (restart == 'y');
}
	cout << "	fin programme" << endl;
	return 0;
}

