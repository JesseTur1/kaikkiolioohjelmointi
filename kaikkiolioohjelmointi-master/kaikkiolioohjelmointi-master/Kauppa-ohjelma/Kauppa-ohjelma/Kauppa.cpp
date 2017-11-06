#include "Kauppa.h"
#include <string>
#include <vector>
#include <iostream>



Kauppa::Kauppa(std::string n, std::string o, std::vector<Tuote> t)
{

	Tuote t1("Banaani", 14, 1);
	Tuote t2("Rollex", 23, 2);
	Tuote t3("BuyMe", 100, 3);


	t.push_back(t1);
	t.push_back(t2);
	t.push_back(t3);


	nimi = n;
	osoite = o;
	tuotteet = t;
}


Kauppa::~Kauppa()
{
}



void Kauppa::lisaaTuote()
{
	std::string tuotenimi;
	int hinta, id;
	std::cout << "kerro tuotteen tiedot :" << std::endl;
	std::cin >> tuotenimi;
	std::cin >> hinta;
	std::cin >> id;
	Tuote tuote(tuotenimi, hinta, id);
	tuotteet.push_back(tuote);
}


void Kauppa::tulostaTuotteet()
{
	for (int i = 0; i < tuotteet.size(); i++)
	{
		tuotteet[i].tulosta();
	}
}