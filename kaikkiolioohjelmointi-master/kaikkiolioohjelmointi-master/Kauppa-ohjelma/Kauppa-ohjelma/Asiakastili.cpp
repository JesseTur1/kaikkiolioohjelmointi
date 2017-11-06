#include "Asiakastili.h"
#include <iostream>
#include <string>
#include "Tuote.h"



Asiakastili::Asiakastili(std::string n, int i, float s, float l)
{
	nimi = n;
	id = i;
	saldo = s;
	luottoraja = l;
}


Asiakastili::~Asiakastili()
{
}

void Asiakastili::lisaaTilille(Tuote tuote)
{
	float a = tuote.hinta;
	if ((saldo + a) < 0)
	{
		std::cout << "no can do, not money enough" << std::endl;
	}
	saldo += a;
}


void Asiakastili::nollaa()
{
	saldo = 0;
}

void Asiakastili::tulosta()
{
	std::cout << "nimi " << nimi << std::endl;
	std::cout << "id " << id << std::endl;
	std::cout << "saldo " << saldo << std::endl;
}

void Asiakastili::lyhennaVelkaa(float l)
{
	saldo += l;
}