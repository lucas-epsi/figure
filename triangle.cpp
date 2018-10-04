#include "triangle.h"
#include "math.h"
using namespace std;

	void triangle::Setcotes(int a, int b, int c){
	basebc = c;
	ab = a;
	ac = b;
	}

	float triangle::getPerimetre(){
	return basebc + ab +ac;
	}
	float triangle::getSurface(){
	hauteur =  sqrt((ab*ab)+(ac*ac));
	return (basebc*hauteur)/2;
	}

