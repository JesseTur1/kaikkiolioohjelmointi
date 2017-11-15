#pragma once
#include "Tuote.h"
#include <string>
#include <vector>xzx
class pekoni : public Tuote
{
public:
	pekoni(std::string n, float h, int i, std::string k);
	void tulosta();
	~pekoni();
private:
	std::string maku;
};

