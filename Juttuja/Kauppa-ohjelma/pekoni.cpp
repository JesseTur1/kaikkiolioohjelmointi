#include "pekoni.h"
#include <string>
#include <iostream>


pekoni::pekoni(std::string n, float h, int i, std::string k)
	: Tuote(n,h,i)
{
	maku = k;
}

void pekoni::tulosta()
{
	Tuote::tulosta();
	std::cout << " , " << maku << std::endl;
}


pekoni::~pekoni()
{
}
