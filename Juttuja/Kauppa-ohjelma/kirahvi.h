#pragma once
#include "Tuote.h"
#include <string>
#include <vector>
class kirahvi: public Tuote
{
public:
	kirahvi(std::string n, float h, int i, float k);
	void tulosta();
	~kirahvi();

private:
	float kaulanpituus;
};

