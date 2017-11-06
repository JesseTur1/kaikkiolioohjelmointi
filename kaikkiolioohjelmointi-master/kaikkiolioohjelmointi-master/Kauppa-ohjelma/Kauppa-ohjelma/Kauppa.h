#pragma once

#include <string>
#include "Tuote.h"
#include <vector>

class Kauppa
{
public:
	Kauppa(std::string n, std::string o, std::vector<Tuote> t);
	~Kauppa();
	void lisaaTuote();
	void tulostaTuotteet();


private:

	std::string nimi;
	std::string osoite;
	std::vector<Tuote> tuotteet;

};

