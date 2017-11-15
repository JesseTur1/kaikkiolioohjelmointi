#include "Asiakastili.h"
#include <iostream>



Asiakastili::Asiakastili(std::string n, int i, float s)
{
	nimi = n;
	id = i;
	saldo = s;
}


Asiakastili::~Asiakastili()
{
}

void Asiakastili::lisaaTilille(float a)
{
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