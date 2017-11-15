#include "kirahvi.h"
#include "Tuote.h"
#include <iostream>


kirahvi::kirahvi(std::string n, float h, int i, float k)
	: Tuote(n,h,i)
{
	kaulanpituus = k;
}


kirahvi::~kirahvi()
{
}

void kirahvi::tulosta()
{
	Tuote::tulosta();
	std::cout << " , " << kaulanpituus << std::endl;
}