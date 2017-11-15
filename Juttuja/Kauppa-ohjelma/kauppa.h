#pragma once

#include <string>
#include <vector>
#include "Tuote.h"

class kauppa
{
public:
	kauppa(std::string n, std::string o, std::vector<Tuote> l);
	~kauppa();
	void LisaaTuote(std::string nimi, float hinta, int id, int tuote);
	void TulostaTuotteet();
	void muutaHintaa(int id, int ale);
	void avaaKauppa();

	std::vector<Tuote> tuotteet;
	std::string nimi;
	std::string osoite;

	static const int PEKONI = 1;
	static const int KIRAHVI = 2;
};

