#pragma once
#include "figure.h"


class triangle : public figure{

	public:
	float basebc, hauteur, ab, ac;
	void Setcotes(int a, int b, int c);
	float getPerimetre() override;
	float getSurface() override;

};
