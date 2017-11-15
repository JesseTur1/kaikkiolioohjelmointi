#include "Tuote.h"
#include "kauppa.h"
#include "Asiakastili.h"
#include <vector>
#include <iostream>
#include <string>
#pragma warning (disable : 4430)

main()
{
	std::vector<Tuote> tuotteet;

	kauppa kauppa1("nimi", "osoite", tuotteet);
	Tuote Banaani("Banaani", 100, 1);
	Tuote Rolex("Rollex", 100, 2);
	Tuote GeneerinenTuoteNumero250("BuyMe", 100, 3);

	kauppa1.avaaKauppa();

	kauppa1.tuotteet.push_back(Banaani);
	kauppa1.tuotteet.push_back(Rolex);
	kauppa1.tuotteet.push_back(GeneerinenTuoteNumero250);

	kauppa1.muutaHintaa(2, 50);
	kauppa1.TulostaTuotteet();
	
	system("PAUSE");
	return 0;
}