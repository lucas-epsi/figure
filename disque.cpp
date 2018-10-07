#include "disque.h"


	void disque::setRayon(int A){
	rayon = A;
	}

	float disque::getPerimetre(){
	const double Pi = 3.14159265358979323846;
	return 2*rayon*Pi;
	}

	float disque::getSurface(){
	const double Pi = 3.14159265358979323846;
	return  Pi*rayon*rayon;
	}
