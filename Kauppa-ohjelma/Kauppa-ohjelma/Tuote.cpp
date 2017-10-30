#include "Tuote.h"
#include <iostream>
#include <string>

Tuote::Tuote(std::string n, int h, int i)
{
	nimi = n;
	hinta = h;
	id = i;
}

Tuote::~Tuote(void)
{
}

void Tuote::tulosta()
{
	std::cout << "Nimi : " << nimi << std::endl;
	std::cout << "Ja hinta oli : " << hinta << std::endl;
	std::cout << "ID : " << id << std::endl;
}
void Tuote::laskeUusiHinta(double alePros)
{
	std::cout << "uusi hinta on:" << (hinta -= (hinta / 100 * alePros)) << std::endl;
}
