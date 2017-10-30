#include "Tuote.h"
#include <iostream>
#include <string>
#pragma warning (disable : 4430)

main()
{
	Tuote Banaani("Banaani", 14, 1);
	Tuote Rolex("Rollex", 23, 2);
	Tuote GeneerinenTuoteNumero250("BuyMe", 100, 3);

	Banaani.tulosta();
	Rolex.tulosta();
	GeneerinenTuoteNumero250.laskeUusiHinta(20);
	system("PAUSE");
	return 0;
}