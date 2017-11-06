#pragma once
#include <string>
#include "Tuote.h"
class Asiakastili
{
public:
	Asiakastili(std::string n,int i, float s, float l);
	~Asiakastili();
	void lisaaTilille(Tuote tuote);
	void nollaa(void);
	void tulosta();
	void lyhennaVelkaa(float l);
private:
	std::string nimi;
	int id;
	float saldo;
	float luottoraja;
};

