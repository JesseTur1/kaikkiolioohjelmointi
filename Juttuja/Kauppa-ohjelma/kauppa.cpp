#include "kauppa.h"

#include <string>
#include <vector>
#include "Tuote.h"
#include <iostream>
#include <cstdlib> 
#include "pekoni.h"
#include "kirahvi.h"



kauppa::kauppa(std::string n, std::string o, std::vector<Tuote> l)
{
	nimi = n;
	osoite = o;
	tuotteet = l;
}


kauppa::~kauppa()
{
}

void kauppa::LisaaTuote(std::string nimi, float hinta, int id, int tuote)
{
	if (tuote == PEKONI)
	{
		std::string mak;
		printf("kerro maku\n");
		std::cin >> mak;
		pekoni bekoni(nimi,hinta,id,mak);
		tuotteet.push_back(bekoni);
	}
	if (tuote == KIRAHVI)
	{
		float mak;
		printf("kerro pituus\n");
		std::cin >> mak;
		kirahvi girahvi(nimi, hinta, id, mak);
		tuotteet.push_back(girahvi);
	}
	else
	{
		Tuote uusituote(nimi, hinta, id);
		tuotteet.push_back(uusituote);
	}
}


void kauppa::TulostaTuotteet()
{

	for (int i = 0; i < tuotteet.size(); i++)
	{
		tuotteet[i].tulosta();
	}

}

void kauppa::muutaHintaa(int id, int ale)
{

	for (int i = 0; i < tuotteet.size(); i++)
	{
		if (tuotteet[i].id == id)
			tuotteet[i].hinta = tuotteet[i].hinta - (tuotteet[i].hinta / 100 * ale);
	}
}

void kauppa::avaaKauppa()
{
	bool quit = false;
	while (!quit)
	{
		int vastaus;
		printf("Tervetuloa! Valitse toiminto: \n **Tulosta kaikki tuotteet(1) \n **Muuta tuotteen hintaa(2) \n **Lisää uusi tuote(3) \n **Lopeta(0)");
		std::cin >> vastaus;
		switch (vastaus)
		{
		case 1:
			TulostaTuotteet();
			break;
		case 2:
		{
			int tuoteid;
			int perc;
			std::cout << "minkä tuotteen hintaa haluat muutta (id) ja paljonko %?" << std::endl;
			std::cin >> tuoteid;
			std::cin >> perc;
			muutaHintaa(tuoteid, perc);
			break;
		}
		case 3:
		{
			std::string uusinimi;
			float uusihinta;
			int uusiID;
			int tuotte;
			std::cout << "kerro tiedot tuotteelle nimi hinta id:" << std::endl;
			std::cin >> uusinimi;
			std::cin >> uusihinta;
			std::cin >> uusiID;
			std::cin >> tuotte;
			LisaaTuote(uusinimi, uusihinta, uusiID, tuotte);
			break;
		}
		case 0:
			quit = true;
			break;
		default:
			break;
		}
	}
}
